t = int(input())
for i in range(t):
    string = input()
    good_1 = "010"
    good_2 = "101"
    if(good_1 in string and good_2 in string):
        print("Good")
    else:
        print("Bad")