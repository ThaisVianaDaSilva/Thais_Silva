#import <stdio.h>

int main(){
    // Crie um programa que leia a nota de 10 alunos
    float nota[10];

    for (int n = 0; n < 10; n++){
        printf("Insira a nota (0 a 20) do %dº aluno: ", n + 1);
        scanf("%f", &nota[n]);

        while(nota[n] > 20 || nota[n] < 0){
            printf("Nota inválida.\n Insira uma nota entre 0 e 20: ", n + 1);
            scanf("%f", &nota[n]);
        }
    }

    // Calcule a média e mostre essa média
    float soma;
    for (int n = 0; n < 10; n++){
        soma += nota[n];
    }

    float media = soma /10;

    // Mostre também quantos alunos ficaram com a sua nota igual ou acima da média. (NOTAS de 0 a20).

    int count = 0;

    for (int n = 0; n < 10; n++){
        if (nota[n] >= media){
            count++;
        }
    }

    printf("A média dos alunos foi %.2f e %d alunos têm a nota igual ou acima da média.", media, count);
}
