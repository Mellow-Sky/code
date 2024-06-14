# def add(n):
#     if n < 10:
#         return n
#     else:
#         return add(n//10) + n%10
#
# print(add(11408855402054064613470328848384))

def fact(n):
    if(n==0):
        return 1
    else:
        return n*fact(n-1)
print(fact(3))