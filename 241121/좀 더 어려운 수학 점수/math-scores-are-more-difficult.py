
a_math, a_english = map(int, input().split())
b_math, b_english = map(int, input().split())

if (a_math > b_math) :
    print('A')
else : 
    print('B')
    if (a_math == b_math and a_math > b_math) :
        print('A')
    elif (a_math == b_math and a_math < b_math) :
        print('B')

