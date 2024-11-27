sum = 0
avg = 0
cnt = 0
while True :
    age = int(input())
    
    if age < 30 :
        sum += age
        cnt += 1
    else :
        avg = sum / cnt
        break
    
print(f"{avg:.2f}")
    
