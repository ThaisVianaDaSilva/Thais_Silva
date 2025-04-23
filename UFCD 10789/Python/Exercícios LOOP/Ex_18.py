num = int(input("Insira um número inteiro: "))
count = 0

for n in range(1, num + 1):
    a = 1
    soma = 0
    
    while a < n:
        if n % a == 0:
            soma += a
        a += 1
        
    if soma == n:
        count += 1
        
    n += 1

print(f"Entre 1 e {num} existem {count} numeros perfeitos")