# from math import sqrt,floor
#
# t = int(input())
#
# while t > 0:
#     n = float(input())
#     print(floor(sqrt(n)))
#     t -= 1



from math import isqrt
def sqr(q):
    a = []
    for n in q:
        ans = isqrt(n)
        a.append(ans)
    return a
def main():
    t = int(input())
    q = []

    while t > 0:
        n = int(input())
        q.append(n)
        t -= 1

    ans = sqr(q)

    for i in ans:
        print(i)

main()