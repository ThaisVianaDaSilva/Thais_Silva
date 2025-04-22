#import <stdio.h>

int main(){
    /*Uma loja oferece para os seus clientes,
    um determinado desconto de acordo com o valor da compra efetuada.*/
    //O desconto é de 10%, se o valor da compra for até 200.00€,
    //15% se for maior que  200€ e menor ou igual a 500,00€
    //20% se for acima de 500,00€.

    //Crie um algoritmo que leia o nome do cliente e o valor da compra.

    char nome[100];
    float valor_compra;

    printf("Insira o seu nome e o valor da sua compra: ");
    scanf("%s %f", nome, &valor_compra);

    /*Mostre ao final
    - nome do cliente,
    - valor da compra,
    - percentual de desconto e o seu valor
    - e valor total a pagar deste cliente. (só fazer duas Contas)*/

    int percent_desc;

    if (valor_compra <= 200){
        percent_desc = 10;
    }
    else if (valor_compra <= 500){
        percent_desc = 15;
    }
    else{
        percent_desc = 20;
    }

    float valor_desc = valor_compra * percent_desc / 100;
    float valor_final = valor_compra - valor_desc;

    printf("Nome: %s\n", nome);
    printf("Valor da compra: %.2f\n", valor_compra);
    printf("Percentual de desconto: %d%%\n", percent_desc);
    printf("Valor do desconto: %.2f\n", valor_desc);
    printf("Valor total a pagar: %.2f\n", valor_final);
}
