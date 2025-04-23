'''
Elabore um programa que leia um valor de entrada
e mostre para cada valor até ao 1
    - Se é Primo,
    - Quantos divisores
    - Quantos números perfeitos

o Programa deve validar entradas entre 1 e 30.000
e parar de 10 em 10 valores com instrução para parar ou continuar.

-----

No mesmo programa use um menu
Elabore uma calculadora simples (+,-,*,/) com a função extra tabuada.

Validar entradas de 1 a 1000 (nota a tabuada deve apresentar todas as multiplicações de 1 ate ao máximo introduzido)
deve parar de 20 em 20 valores.

'''
def primo(num):
    primo = bool(True)
    
    if num < 2:
        primo = False
    else:
        for n in range(2, num):
            if num % n == 0:
                primo = False
                break
            
    return primo

def divisores(num):
    count = 1

    for n in range(1, num):
        if num % n == 0:
            count += 1

    return count

def perfeitos(num):
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

    return count

def soma(num, n):
    print(f"\n{num} + {n} = {num + n}")

    return 0

def subtracao(num, n):
    print(f"\n{num} - {n} = {num - n}")

    return 0

def div(num, n):
    print(f"\n{num} / {n} = {num / n}")

    return 0

def mult(num, n):
    print(f"\n{num} * {n} = {num * n}")

    return 0

def tabuada(num, max):
    for m in range (1, max + 1, 20):
        for n in range(m, min(m + 10, max + 1)):
            print(f"{num} * {n} = {num * n}")

        n += 1
                
        if n < m:
            resp = str(input("\nInsira 'c' para continuar ou 's' para sair: ")).lower()
        
            while resp != 's' and resp != 'c':
                print("Resposta inválida.")
                resp = str(input("\nInsira 'c' para continuar ou 's' para sair: ")).lower()
            
            if resp == 's':
                print("Adeus :C")
                break 
        
    return 0

def prog1():
    entrada = int(input("Introduza um valor entre 1 e 30 mil: "))

    while entrada < 1 or entrada > 30000:
        entrada = int(input("\nValor inválido.\nIntroduza um valor entre 1 e 30 mil: "))
        
    for v in range (1, entrada + 1, 10):
        for n in range(v, min(v + 10, entrada + 1)):
            if primo(n):
                print(f"O número {n} é primo, tem {divisores(n)} divisor/es e até ele exite/m {perfeitos(n)} número/s perfeito/s")
            else: 
                print(f"O número {n} não é primo, tem {divisores(n)} divisor/es e até ele exite/m {perfeitos(n)} número/s perfeito/s")
                
        if n < entrada:
            resp = str(input("\nInsira 'c' para continuar ou 's' para sair: ")).lower()
        
            while resp != 's' and resp != 'c':
                print("Resposta inválida.")
                resp = str(input("\nInsira 'c' para continuar ou 's' para sair: ")).lower()
            
            if resp == 's':
                print("Adeus :C")
                break 
            
def prog2():
    print('''Insira:
1 - Somar
2 - Subtrair
3 - dividir
4 - mutiplicar
5 - tabuada
''')
    
    op = int(input("Opção: "))
    
    while op > 5 or op < 1:
        op = int(input("Opção inválida. Tente novamente: "))
    
    match op:
        case 1:
            num1 = int(input("Insira um número: "))
            num2 = int(input("Insira o número que quer somar: "))
            soma(num1, num2)
            
        case 2:
            num1 = int(input("Insira um número: "))
            num2 = int(input("Insira o número que quer subtrair: "))
            subtracao(num1, num2)
            
        case 3:
            num1 = int(input("Insira um número: "))
            num2 = int(input("Insira o número com que quer dividir: "))
            div(num1, num2)
            
        case 4:
            num1 = int(input("Insira um número: "))
            num2 = int(input("Insira o número com que quer multiplicar: "))
            mult(num1, num2)
            
        case 5:
            num1 = int(input("Insira um número: "))
            num2 = int(input("Insira o número máximo da tabuada: "))
            soma(num1, num2)
            
print('''Insira:
1 - Algo
2 - Mini Calculadora
''')

prog = int(input("Opção: "))
    
while prog > 2 or prog < 1:
    prog = int(input("Opção inválida. Tente novamente: "))
    
    match prog:
        case 1:
            prog1()
            
        case 2:
            prog2()