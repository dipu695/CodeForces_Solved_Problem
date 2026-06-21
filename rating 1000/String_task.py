s = input()
l = s.lower()
ans = ""
for i in range(len(s)):
    if l[i] == 'a' or l[i] == 'y' or l[i] == 'e' or l[i] == 'i' or l[i] == 'o' or l[i] == 'u':
        continue

    else:
        ans += "."
        ans += l[i]
print(ans)

         
