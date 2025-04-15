#Criar menu com 3 opções
#- Introduzir nomes
#- Listar nomes na lista
#- Parar programa

nomes = []
Continuar = True

while Continuar:
    print('''#############################
#           Opções          #
#############################
# 1 - Introduzir nome/s     #
# 2 - Listar nomes da lista #
# 3 - Parar Programa        #
#############################''')

    op = int(input("\nEscolha uma opção: "))
    
    match op:
        case 1:
            introduzir = True
            resp = "S"
            
            while introduzir:
                if resp == "S" or resp == "s":
                    nomes.append(input("Introduza um novo nome: "))
                    resp = input("Nome introduzido á lista.\n\nPretende adicionar outro nome? (responda com \"S\" ou \"N\") ")
                elif resp == "N" or resp == "n":
                    introduzir = False
                    print("\n")
                    break
                else:
                    resp = input("Resposta inválida\nPretende adicionar outro nome? (responda com \"S\" ou \"N\") ")                    
            
        case 2:
            print(nomes, "\n")
            
        case 3:
            continuar = False
            break
        
        case default:
            print("\nOpção inválida tente novamente\n")