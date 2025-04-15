soma = int(0)
n = 0

while n < 10:
    soma = soma + (float(input(f"introduza a {n+1}º nota: "))) 
    n += 1

media = soma / 10
    
print(f"\n{media}")