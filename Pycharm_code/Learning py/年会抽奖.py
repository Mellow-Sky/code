import random

for e in range(1):

    input("按回车公布三等奖")
    for i in range(30):
        third_prize=random.randint(1,301)
        print(f"恭喜{third_prize}号获得避孕套一盒")


    input("按回车公布二等奖")
    for j in range(6):
        second_prize=random.randint(1,301)
        print(f"恭喜{second_prize}号获得iphone手机")


    input("按回车公布一等奖")
    for p in range(3):
        first_prize=random.randint(1,301)
        print(f"恭喜{first_prize}号获得泰国5日游")

