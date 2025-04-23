#include <stdio.h>

int main(){
    //Crie 2 variáveis (num1 e num2)
    float num1 = 0;
    float num2 = 0;

    //Leia o valor para cada um deles.
    printf("Insira 2 números: ");
    scanf("%f %f", &num1, &num2);

    //Mostre os valores de forma crescente e decrescente
    if (num1 < num2){
        printf("Crescente: %.2f <= %.2f\n Decrescente: %.2f >= %.2f", num1, num2, num2, num1);
    }
    else{
        printf("Crescente: %.2f <= %.2f\n Decrescente: %.2f >= %.2f", num2, num1, num1, num2);
    }
}
