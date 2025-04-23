num = int(input("Insira um número inteiro: "))
count = 1

for n in range(1, num):
    if num % n == 0:
        count += 1

print(f"O número {num} tem {count} divisor/es")