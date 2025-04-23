num = int(input("Insira um número inteiro: "))
count = 0

for n in range(1, num):
    print(f"\n{num} + {n} = {num + n}")
    print(f"{num} - {n} = {num - n}")
    print(f"{num} / {n} = {num / n}")
    print(f"{num} * {n} = {num * n}")
    
    count += 4
    n += 1

print(f"\nForam efetuadas {count} operações")