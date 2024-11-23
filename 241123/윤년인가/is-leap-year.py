leap_year = int(input())

if ((leap_year % 4 == 0) or (leap_year % 400 == 0)) :
    print("true")
else :
    print("false")