import random
import string

count=0
while count<3:

    for i in range(20):
        m="".join(random.sample(string.ascii_uppercase+string.digits,5))
        n="".join(random.sample(string.ascii_uppercase,1))
        print(f"京{n}-{m}")
    choise=input("请输入你喜欢的车牌:")