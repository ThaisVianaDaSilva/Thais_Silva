num = int(input("Insira um número inteiro: "))
primo = bool(True)

if num < 2:
    primo = False
else:
    for n in range(2, num):
        if num % n == 0:
            primo = False
            break
        
if primo:
    print(f"{num} é primo.")
else:
    print(f"{num} não é primo.")