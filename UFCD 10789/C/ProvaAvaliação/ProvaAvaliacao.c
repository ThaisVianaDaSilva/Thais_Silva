#import <stdio.h>

int main(){
    // Crie um programa que leia a nota de 10 alunos
    float nota[10];

    for (int n = 0; n < 10; n++){
        printf("Insira a nota (0 a 20) do %d� aluno: ", n + 1);
        scanf("%f", &nota[n]);

        while(nota[n] > 20 || nota[n] < 0){
            printf("Nota inv�lida.\n Insira uma nota entre 0 e 20: ", n + 1);
            scanf("%f", &nota[n]);
        }
    }

    // Calcule a m�dia e mostre essa m�dia
    float soma;
    for (int n = 0; n < 10; n++){
        soma += nota[n];
    }

    float media = soma /10;

    // Mostre tamb�m quantos alunos ficaram com a sua nota igual ou acima da m�dia. (NOTAS de 0 a20).

    int count = 0;

    for (int n = 0; n < 10; n++){
        if (nota[n] >= media){
            count++;
        }
    }

    printf("A m�dia dos alunos foi %.2f e %d alunos t�m a nota igual ou acima da m�dia.", media, count);
}
