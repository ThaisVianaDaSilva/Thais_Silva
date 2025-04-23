n = 0
soma = int()

while n < 30:
    num = (int(input("Insira um número par entre 1 e 50: ")))

    while num < 1 or num > 50 or num % 2 != 0:
        num = (int(input("Número inválido.\nInsira um número par entre 1 e 50: ")))
        
    soma += num
    n += 1
        
media = soma / 30
        
print(media)