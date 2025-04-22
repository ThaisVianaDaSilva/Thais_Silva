#import <stdio.h>

int main(){
    // O sistema de avalia��o de determinada disciplina, � composto por tr�s provas Nota (0 a 10).
    // A primeira prova tem peso 2, a Segunda tem peso 3 e a terceira prova tem peso 5.
    // Fa�a um algoritmo para calcular a m�dia final de um aluno desta disciplina
    //e se a media for maior ou igual a 6, mostrar APROVADO, sen�o, mostrar REPROVADO.

    float nota[3];

    for (int n = 0; n < 3; n++){
        printf("Insira a %d� nota(0 a 10): ", n + 1);
        scanf("%f", &nota[n]);

        while(nota[n] > 10 || nota[n] < 0){
            printf("Nota inv�lida.\n Insira uma nota entre 0 e 10: ", n + 1);
            scanf("%f", &nota[n]);
        }
    }

    float media = nota[0] * 0.2 + nota[1] * 0.3 + nota[2] * 0.5;

    if (media >= 6){
        printf("Nota %.2f\nAPROVADO", media);
    }
    else{
        printf("Nota %.2f\nREPROVADO", media);
    }
}
