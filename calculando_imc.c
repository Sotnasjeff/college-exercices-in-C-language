#include <stdio.h>

    int main () {

        //Declarando variáveis

        float massa, altura, imc;

        //entrada de dados
        printf("digite o peso em Kg:\n");
        scanf("%f",&massa);

        printf("digite a sua altura:\n");
        scanf ("%f",&altura);

        //Processando dados

        imc= massa/(altura*altura);

        if (imc<18.0){
                printf("seu imc é abaixo do normal\n");
        }
        else if (imc<25.0){
                printf("seu imc é considerado normal\n");
        }
        else if (imc<35.0){
                printf("seu imc é de uma pessoa sobrepreso");
        }
        else {
                printf("seu imc é de uma pessoa obesa");
        }
    return 0;}
