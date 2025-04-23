#include <stdio.h>

int main(){
    // Ler para uma variável INTEIRA um número de 1 a 12
    int mes = 0;

    printf("Insira um número de um mês: ");
    scanf ("%d", &mes);

    // Mostrar o nome do mês correspondente
    switch (mes){
        case 1:
            printf("Janeiro");
            break;

        case 2:
            printf("Fevereiro");
            break;

        case 3:
            printf("Março");
            break;

        case 4:
            printf("Abril");
            break;

        case 5:
            printf("Maio");
            break;

        case 6:
            printf("Junho");
            break;

        case 7:
            printf("Julho");
            break;

        case 8:
            printf("Agosto");
            break;

        case 9:
            printf("Setembro");
            break;

        case 10:
            printf("Outubro");
            break;

        case 11:
            printf("Novembro");
            break;

        case 12:
            printf("Dezembro");
            break;

    // Caso o mês não existir, mostrar essa informação.
        default:
            printf("Mês %d não existe", mes);
            break;
    }
}

