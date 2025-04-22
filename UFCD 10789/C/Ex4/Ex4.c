#import <stdio.h>

int main(){
    // Fazer um algoritmo que leia o saldo inicial de cliente do banco e leia também um cheque que entrou
    float saldo_i;
    float cheque;

    printf("Insira o seu saldo e o valor do cheque: ");
    scanf("%f %f", &saldo_i, &cheque);

    // ANALISE se o cheque poderá ser descontado ou não, já que este cliente não possui limite.
    if(cheque > saldo_i){
        // Se o cheque não poderá ser descontado, mostre essa informação
        printf("\nO seu saldo é insuficiente");
    }
    else{
        // Caso contrário, desconte o cheque e informe o saldo.
        printf("\nO cheque foi descontado.\nO seu salso final é %.2f.", saldo_i - cheque);
    }
}
