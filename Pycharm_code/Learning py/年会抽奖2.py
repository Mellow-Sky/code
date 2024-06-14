import random


n=random.sample(range(1,301),39)

for i in range(1):
    input("按回车公布三等奖")
    for w in range(1):
        third_prize = list(random.sample(n, 30))
        print(f"恭喜{third_prize}号获得避孕套一盒")

    input("按回车公布二等奖")
    for q in range(1):
        second_prize = random.sample(list(set(n)-set(third_prize)),6)
        print(f"恭喜{second_prize}号获得iphone手机")

    input("按回车公布一等奖")
    for a in range(1):
        first_prize = random.sample(list(set(n)-set(third_prize)-set(second_prize)), 3)
        print(f"恭喜{first_prize}号获得泰国5日游")