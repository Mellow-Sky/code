# def improve(update, close, guess=1):
#     while not close(guess):
#         guess = update(guess)
#     return guess
#
# def approx_eq(x, y, tolerance=1e-15):
#     return abs(x - y) < tolerance
#
# def newton_update(f, df):
#     def update(x):
#         return x - f(x) / df(x)
#
#     return update
#
# def find_zero(f, df):
#     def near_zero(x):
#         return approx_eq(f(x), 0)
#
#     return improve(newton_update(f, df), near_zero)
#
# def square_root_newton(a):
#     def f(x):
#         return x * x - a
#
#     def df(x):
#         return 2 * x
#
#     return find_zero(f, df)
#
# def power(x, n):
#     """Return x * x * x * ... * x for x repeated n times."""
#     product, k = 1, 0
#     while k < n:
#         product, k = product * x, k + 1
#     return product
#
# def nth_root_of_a(n, a):
#     def f(x):
#         return power(x, n) - a
#
#     def df(x):
#         return n * power(x, n - 1)
#
#     return find_zero(f, df)
#
#
#
# result = square_root_newton(16)
# print(result)  # 4
# result = square_root_newton(9)
# print(result)  # 3
# result = power(2, 3)
# print(result)  # 8
# result = nth_root_of_a(3, 27)
# print(result)  # 3





# def curried_pow (x):
#     def y_pow(y):
#         return pow(x,y)
#     return y_pow
#
# # square = curried_pow(2)(3)
# # print(square)
# def mpa_to_range(star,end,f):
#     while star<end:
#         print(f(star))
#         star+=1
#
# mpa_to_range(0,10,curried_pow(2))


# triple = lambda x: 3*x
# def make_repeater(f, n):
#     def h (x):
#         temp = n
#         while temp != 0:
#             x = f(x)
#             temp -= 1
#         return x
#     return h
#
#
# print(make_repeater(triple, 5)(1) )# 3 * 3 * 1