def main():
    n = int(input())
    a = input().strip()
    b = input().strip()

    swaps = []
    for i in range(n):
        if a[i] < b[i]:
            swaps.append(i)

    for i in swaps:
        a, b = b, a

    ans = 1
    for i in range(n):
        ans = (ans * int(a[i]) * int(b[i])) % 998244353

    print(ans)

if __name__ == "__main__":
    main()
