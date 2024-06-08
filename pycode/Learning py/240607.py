
# def gcd(a,b):
#     if b==0:
#         return a
#     else:
#         return gcd(b,a%b)
#
# n = int(input())
# mod = 1e9+7
# sum = 0
# for i in range(2,n+1):
#     sum += gcd(i*(i-1)//2,i*(i+1)//2)%mod
# print(int(sum))

def find_kth_not_divisible(n, k):
    # 计算商和余数
    q = k // (n - 1)
    r = k % (n - 1)

    # 使用推导的公式计算 m
    m = q * n + r

    # 特殊情况调整
    if r == 0:
        m -= 1

    return m


# 示例使用
n = 4
k = 12
print(find_kth_not_divisible(n, k))  # 输出应该是 10
