a, b, c = map(int, input().split())

if a > b and a > c : # a가 제일 클 때
    if b > c : #b가 c보다 크면
        print(b) #b출력
    else : #c가 b보다 크면
        print(c) 

elif b > a and b > c : # b가 제일 클 때
    if a > b : #a가 b보다 크면
        print(a) #b출력
    else : #b가 a보다 크면
        print(b)

else :
    print(c)
