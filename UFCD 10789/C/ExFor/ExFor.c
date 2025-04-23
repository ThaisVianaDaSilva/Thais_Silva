#include <stdio.h>

int main(){
    // Ler 10 números
    int num = 0;

    // Determinar o número par e numero impar…
    for (int n = 0; n < 10; n++){
        printf("Insira o %dº número: ", n + 1);
        scanf("%d", &num);

        if (num % 2 == 0){
            puts("Par\n");
        }
        else{
            puts("Ímpar\n");
        }
    }
}