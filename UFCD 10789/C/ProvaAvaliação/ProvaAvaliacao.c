#include <stdio.h>

int main(){
    // Crie um programa que leia a nota de 10 alunos
    float nota[10];

    float soma = 0;

    float media = 0;

    int count = 0;

    for (int n = 0; n < 10; n++){
        printf("Insira a nota (0 a 20) do %d� aluno: ", n + 1);
        scanf("%f", &nota[n]);

        while(nota[n] > 20 || nota[n] < 0){
            printf("Nota inválida.\n Insira uma nota entre 0 e 20: ");
            scanf("%f", &nota[n]);
        }
    }

    // Calcule a média e mostre essa média
    for (int n = 0; n < 10; n++){
        soma += nota[n];
    }

    media = soma /10;

    // Mostre tamb�m quantos alunos ficaram com a sua nota igual ou acima da média. (NOTAS de 0 a20).

    for (int n = 0; n < 10; n++){
        if (nota[n] >= media){
            count++;
        }
    }

    printf("A média dos alunos foi %.2f e %d alunos têm a nota igual ou acima da média.", media, count);
}
