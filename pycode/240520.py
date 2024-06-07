nt = int(input())

for t in range(nt):
    line = input()
    x, y = [int(q) for q in line.split()]
    mm = (y + 1) // 2
    x -= (mm * 5 * 3 - y * 2 * 2)
    x = max(x, 0)
    mm += (x + 5 * 3 - 1) // (5 * 3)
    print(mm)