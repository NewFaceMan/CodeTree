a, b, c = map(int, input().split())

# 가장 큰 값 찾기
if a > b and a > c:  # a가 가장 큰 경우
    print(b if b > c else c)
elif b > a and b > c:  # b가 가장 큰 경우
    print(a if a > c else c)
else:  # c가 가장 큰 경우
    print(a if a > b else b)