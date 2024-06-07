# def volve(n):
#     """
#     这是一个求平方的函数
#     :param n: 平方的数
#     :return: 返回平方结果
#     """
#     return n*n
# print(11)
# help(volve)
# print(volve(10))

# def fib(n):
#     a , b = 0 , 1
#     k = 2
#     print(f"{a}\n{b}")
#     while k<n:
#         a , b = b,a + b
#         print(b,' ')
#         k += 1
#     return b
# fib(10)
#
# assert fib(10) == 33,'The 2nd Fibonacci number should be 1'




# def double_eights(n):
#     """Return true if n has two eights in a row.
#     >>> double_eights(8)
#     False
#     >>> double_eights(88)
#     True
#     >>> double_eights(2882)
#     True
#     >>> double_eights(880088)
#     True
#     >>> double_eights(12345)
#     False
#     >>> double_eights(80808080)
#     False
#     """
#     prev_eight = False
#     while n > 0:
#         last_digit = n % 10
#         if last_digit == 8 and prev_eight:
#             return True
#         elif last_digit == 8:
#             prev_eight = True
#         else:
#             prev_eight = False
#         n = n // 10
#     return False
#
# # Alternate solution
# def double_eights_alt(n):
#     """Return true if n has two eights in a row.
#         >>> double_eights(8)
#         False
#         >>> double_eights(88)
#         True
#         >>> double_eights(2882)
#         True
#         >>> double_eights(880088)
#         True
#         >>> double_eights(12345)
#         False
#         >>> double_eights(80808080)
#         False
#         """
#     while n:
#         if n % 10 == 8 and n // 10 % 10 == 8:
#             return True
#         n //= 10
#     return False
#
# print(double_eights_alt(8))

