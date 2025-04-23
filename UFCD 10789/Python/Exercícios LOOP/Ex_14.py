num = int(input("Insira um número inteiro: "))

for n in range(1, 101):
    print(f"{num} * {n} = {num * n}")

    n += 1