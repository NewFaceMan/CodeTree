a, b, c = map(int, input().split())
sum = a + b + c
avg = int(sum / 3)
hap_avg = sum - avg
print(f"{sum}\n{avg}\n{hap_avg}")