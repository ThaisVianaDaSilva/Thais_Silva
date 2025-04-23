count = 0
num = 0
primos = []

while count < 10:
    num += 1
    if num < 2:
        count = count
    else:
        for n in range(2, num):
            if num % n == 0:
                count = count
                break
        else:
            primos.append(num)
            count += 1
            
for p in primos:
    print(f"{p} ")