n = int(input())
sum_val = 0
for _ in range(n) :
    number = int(input())
    if (n % 2 == 1 and n % 3 == 0) :
        sum_val += number
print(sum_val)

