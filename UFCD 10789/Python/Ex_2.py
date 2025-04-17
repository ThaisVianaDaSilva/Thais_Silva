num = int(input("Intruduza um número: "))

if num % 2 == 0 and num != 2:
    print("Não primo")
elif num % 3 == 0 and num != 3:
    print("Não primo")
else:
    print("Primo")