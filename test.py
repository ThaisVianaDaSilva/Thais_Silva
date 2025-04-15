nomes = []
 
while True:
    dec = input("Quer intruduzir um nome? ")
    if dec == "S" or dec == "s":
        break
nomes.append(input("Introduza um novo nome: "))
print(nomes)
 