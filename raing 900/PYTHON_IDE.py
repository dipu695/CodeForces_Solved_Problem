import tkinter as tk
from tkinter import messagebox
from tkinter.filedialog import asksaveasfilename, askopenfilename
import subprocess

root = tk.Tk()
root.title("Python IDE")
root.geometry("1280x720+150+80")
root.configure(bg="#1e1e2e")
root.resizable(True, False)

file_path = ''

def set_file_path(path):
    global file_path
    file_path = path
    root.title(f"Python IDE — {path}")   # show active file in title bar

def open_file():
    path = askopenfilename(filetypes=[('Python Files', '*.py')])
    if not path:          # user cancelled the dialog
        return
    try:
        with open(path, 'r') as file:
            code = file.read()
        srccode.delete('1.0', tk.END)
        srccode.insert('1.0', code)
        set_file_path(path)
    except OSError as e:
        messagebox.showerror("Open Error", str(e))

def save():
    global file_path
    if file_path == '':
        path = asksaveasfilename(
            defaultextension='.py',
            filetypes=[('Python Files', '*.py')]
        )
        if not path:      # user cancelled the dialog
            return
    else:
        path = file_path

    try:
        with open(path, 'w') as file:
            code = srccode.get('1.0', tk.END)
            file.write(code)
        set_file_path(path)
    except OSError as e:
        messagebox.showerror("Save Error", str(e))

def run():
    if file_path == '':
        messagebox.showerror("Python IDE", "Please save your code first.")
        return

    # Auto-save before running so edits are always reflected
    save()

    output.config(state=tk.NORMAL)
    output.delete('1.0', tk.END)   # clear previous output

    try:
        proc = subprocess.Popen(
            ['python', file_path],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE
        )
        result, error = proc.communicate(timeout=30)  # 30-second timeout guard

        if result:
            output.insert(tk.END, result.decode('utf-8', errors='replace'))
        if error:
            output.insert(tk.END, error.decode('utf-8', errors='replace'), 'error')

    except subprocess.TimeoutExpired:
        proc.kill()
        output.insert(tk.END, "⚠ Process timed out after 30 seconds.\n", 'error')
    except OSError as e:
        output.insert(tk.END, f"⚠ Could not launch process: {e}\n", 'error')

# ── Layout ────────────────────────────────────────────────────────────────────

# Source code pane
srccode = tk.Text(
    root,
    font=("Consolas", 18),
    bg="#1e1e2e", fg="#cdd6f4",
    insertbackground="white",    # visible cursor
    undo=True                    # Ctrl-Z support
)
srccode.place(x=160, y=0, width=680, height=720)

# Output pane
output = tk.Text(
    root,
    font=("Consolas", 12),
    bg="#181825", fg="#a6e3a1",
    state=tk.NORMAL
)
output.tag_configure('error', foreground='#f38ba8')  # red for stderr
output.place(x=860, y=0, width=420, height=720)

# ── Buttons ───────────────────────────────────────────────────────────────────
# Replace the PhotoImage lines below with your own image paths,
# or swap to tk.Button(text=...) if images aren't available.

try:
    img_open = tk.PhotoImage(file="open.png")
    img_save = tk.PhotoImage(file="save.png")
    img_run  = tk.PhotoImage(file="run.png")
    use_images = True
except tk.TclError:
    use_images = False

BTN_STYLE = dict(bg="#313244", activebackground="#45475a", bd=0, cursor="hand2")

if use_images:
    tk.Button(root, image=img_open, command=open_file, **BTN_STYLE).place(x=30, y=30)
    tk.Button(root, image=img_save, command=save,      **BTN_STYLE).place(x=30, y=130)
    tk.Button(root, image=img_run,  command=run,       **BTN_STYLE).place(x=30, y=230)
else:
    # Graceful fallback when image files are missing
    tk.Button(root, text="📂 Open", command=open_file, **BTN_STYLE,
              fg="white", font=("Consolas", 11), width=8).place(x=10, y=30)
    tk.Button(root, text="💾 Save", command=save, **BTN_STYLE,
              fg="white", font=("Consolas", 11), width=8).place(x=10, y=80)
    tk.Button(root, text="▶  Run",  command=run, **BTN_STYLE,
              fg="#a6e3a1", font=("Consolas", 11), width=8).place(x=10, y=130)

root.mainloop()