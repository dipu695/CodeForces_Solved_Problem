t = int(input())

while True:

    if not t:
        break

    h , m = map(int , input().split())
    x = (24 - h)*60
    y = x - m
    print(y)

    t-=1
