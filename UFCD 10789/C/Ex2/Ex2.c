#include <stdio.h>

int main(){
    //Fazer um programa que analise 3 valores inteiros
    //(através das variáveis num1, num2 e num3)
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    int maior = 0;
    int menor = 0;

    printf("Insira 3 números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //informa qual o maior e qual o menor deles.
    maior = num1;
    menor = num1;

    if (num2 > maior){
        maior = num2;
    }
    else if(num2 < menor){
        menor = num2;
    }

    if (num3 > maior){
        maior = num3;
    }
    else if(num3 < menor){
        menor = num3;
    }

    printf("Maior: %d\nMenor: %d", maior, menor);
}
