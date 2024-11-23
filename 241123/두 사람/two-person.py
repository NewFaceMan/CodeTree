a = input()
arr1 = a.split()
b = input()
arr2 = b.split()

a_age = int(arr1[0])
a_gender = arr1[1]

b_age = int(arr2[0])
b_gender = arr2[1]

if((a_age >= 19 and a_gender == 'M') or (b_age >= 19 and b_gender == 'M')) :
    print(1)
else : 
    print(0)


