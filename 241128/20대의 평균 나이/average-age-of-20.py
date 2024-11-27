sum_age = 0
avg = 0
cnt = 0
while True :
    age = int(input())
    
    if age < 30 :
        sum_age += age
        cnt += 1
    if age <= 20 || age >= 30 :
        avg = sum_age / cnt
        break
    
print(f"{avg:.2f}")
    
