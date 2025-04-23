#include <stdio.h>

int main(){
    //Ler 3 valores INTEIROS para as vari�veis Num1, Num2, Num3
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    int maior = 0;
    int menor = 0;
    int meio = 0;

    printf("Insira 3 números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //Apresentar os valores dispostos em ordem crescente e decrescente.
    maior = num1;
    menor = num1;
    meio = num1;
 
    if (num2 > maior){
        maior = num2;
    }
    else if(num2 < menor){
        menor = num2;
    }
    else{
        meio = num2;
    }

    if (num3 > maior){
        maior = num3;
    }
    else if(num3 < menor){
        menor = num3;
    }
    else{
        meio = num3;
    }

    printf("Crescente: %d <= %d <= %d\nDecrescente: %d >= %d >= %d", menor, meio, maior, maior, meio, menor);
}
