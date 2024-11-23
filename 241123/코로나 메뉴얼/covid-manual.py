a = input().split()
a_coldSymptoms = a[0]
a_temperature = int(a[1])

b = input().split()
b_coldSymptoms = b[0]
b_temperature = int(b[1])

c = input().split()
c_coldSymptoms = c[0]
c_temperature = int(c[1])

if a_coldSymptoms == 'Y' and a_temperature >= 37 :
    if (b_coldSymptoms == 'Y' and b_temperature >= 37) or (c_coldSymptoms == 'Y' and c_temperature >= 37) :
        print('E')
    else :
        print('N')
else :
    if (b_coldSymptoms == 'Y' and b_temperature >= 37) and (c_coldSymptoms == 'Y' and c_temperature >= 37) : 
        print('E')
    else :
        print('N')