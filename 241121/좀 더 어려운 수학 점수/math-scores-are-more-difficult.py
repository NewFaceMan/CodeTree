
a_math, a_english = map(int, input().split())
b_math, b_english = map(int, input().split())

if a_math > b_math or (a_math == b_math and a_english > b_english) :
    print('A')
else :
    print('B')

