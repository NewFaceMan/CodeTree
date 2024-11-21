
a_math, a_english = map(int, input().split())
b_math, b_english = map(int, input().split())

if a_math > b_math :
    print('A')
elif b_math > a_math :
    print('B')
elif (a_math == b_math and a_english > b_english) :
    print('A')
elif (a_math == b_math and b_english > a_english) :
    print('B')
else :
    print("다시 입력하세요.")

