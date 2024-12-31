a = 0
for i in range(1, 9):
    a += (i * i * i)
x = 9
while True:
    p = a
    while p >= 100:
        p /= 10
    p = p + (a % 100)
    if ((p * p) == a):
        print(a)
    a += (x * x * x)
    x += 1