#import <stdio.h>

int main(){
    // Fazer um algoritmo que leia o saldo inicial de cliente do banco e leia tamb�m um cheque que entrou
    float saldo_i;
    float cheque;

    printf("Insira o seu saldo e o valor do cheque: ");
    scanf("%f %f", &saldo_i, &cheque);

    // ANALISE se o cheque poder� ser descontado ou n�o, j� que este cliente n�o possui limite.
    if(cheque > saldo_i){
        // Se o cheque n�o poder� ser descontado, mostre essa informa��o
        printf("\nO seu saldo � insuficiente");
    }
    else{
        // Caso contr�rio, desconte o cheque e informe o saldo.
        printf("\nO cheque foi descontado.\nO seu salso final � %.2f.", saldo_i - cheque);
    }
}
