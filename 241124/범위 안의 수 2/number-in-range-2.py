roop_cnt = 0
sum_val = 0
count = 0
while roop_cnt < 10 :
    num = int(input())
    if num >= 0 and num <= 200 :
        sum_val += num
        count += 1
    roop_cnt += 1

avg = sum_val / count
print(sum_val, end = ' ')
print(f"{avg:.1f}")

