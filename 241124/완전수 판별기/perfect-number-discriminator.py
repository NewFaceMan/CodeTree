n = int(input())
temp = 0
for i in range(1, n) :
    if n % i == 0 :
        temp += i
if n == temp :
    print('P')
else :
    print('N')
