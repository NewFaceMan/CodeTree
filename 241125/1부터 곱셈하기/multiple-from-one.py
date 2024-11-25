n = int(input())
multiple = 1
for i in range(1, 11) :
    multiple *= i
    if multiple >= n :
        print(i)
        break
