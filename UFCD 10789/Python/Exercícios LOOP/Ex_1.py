n = 1
pares = []
ímpares = []

while n <= 30:
    if n % 2 == 0:
        pares.append(n)
    else:
        ímpares.append(n)
    n += 1
    
print(f"Pares: {pares}\nÍmpares: {ímpares}")