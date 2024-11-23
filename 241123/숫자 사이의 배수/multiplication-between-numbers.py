a, b = map(int, input().split())
sum_val = 0
count = 0
for i in range (a, b+1) :
    if (i % 5 == 0 or i % 7 == 0) :
        sum_val += i
        count += 1
avg = sum_val / count

print(sum_val, end = ' ')
print("%.1f" %avg)