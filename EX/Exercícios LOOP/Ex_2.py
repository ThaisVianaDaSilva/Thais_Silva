num = []
n = 0

while n < 10:
    num.append(int(input(f"introduza o {n+1}º número: ")))
    n += 1

pares = []
ímpares = []

for n in num:
    if n % 2 == 0:
        pares.append(n)
    else:
        ímpares.append(n)
    n += 1
    
print(f"\nPares: {pares}\nÍmpares: {ímpares}")