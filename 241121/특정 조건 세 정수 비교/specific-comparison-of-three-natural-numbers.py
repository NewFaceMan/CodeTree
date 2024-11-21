a, b, c = map(int, input().split())

if a < b and a < c :
    minimum = a
elif b < a and b < c :
    minimum = b
else :
    minimum = c

print(int(a == minimum), end = " ")
print(int(a == b == c))