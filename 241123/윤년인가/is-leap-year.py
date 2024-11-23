year = int(input())

if (year % 400 != 0 and year % 100 == 0) :
    print("false")
else :
    print("true")