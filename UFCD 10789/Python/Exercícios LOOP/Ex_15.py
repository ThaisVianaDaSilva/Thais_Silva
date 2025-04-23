dispor = 20

for l in range(0, 256, dispor):
    for c in range(l, min(l + dispor, 256)):
        print(f"ASCII: {c} | Caractere: {repr(chr(c))}")
    
    resp = str(input("\nInsira 'c' para continuar ou 's' para sair: ")).lower()
    
    while resp != 's' and resp != 'c':
        print("Resposta inválida.")
        resp = str(input("\nInsira 'c' para continuar ou 's' para sair: ")).lower()
    
    if resp == 's':
        print("Adeus :C")
        break