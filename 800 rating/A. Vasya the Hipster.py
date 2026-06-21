a ,b = map(int , input().split())

m = min(a ,b)
if a > b:
    k = a - b
else:
    k = b - a

if k > 1 :
    n = int(k / 2)
else:
    n = 0
print(m , n)