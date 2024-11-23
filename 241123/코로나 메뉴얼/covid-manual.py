a = input().split()
a_coldSymptoms = a[0]
a_temperature = int(a[1])

b = input().split()
b_coldSymptoms = b[0]
b_temperature = int(b[1])

c = input().split()
c_coldSymptoms = c[0]
c_temperature = int(c[1])

clinicA = 0
clinicB = 0
clinicC = 0
clinicD = 0

if (a_coldSymptoms == 'Y' or b_coldSymptoms == 'Y' or c_coldSymptoms == 'Y') :
    if (a_temperature >= 37 or b_temperature >= 37 or c_temperature >= 37) :
        clinicA += 1
    else :
        clinicC += 1

elif (a_coldSymptoms == 'N' or b_coldSymptoms == 'N' or c_coldSymptoms == 'N') :
    if (a_temperature >= 37 or b_temperature >= 37 or c_temperature >= 37) :
        clinicB += 1
    else :
        clinicD += 1

if clinicA >= 2 :
    print('E')
else :
    print('N')
        

