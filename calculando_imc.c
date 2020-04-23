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
                printf("voce mora na cracolandia filho da puta\n");
        }
        else if (imc<25.0){
                printf("voce e um ser desprezivel de normal\n");
        }
        else if (imc<35.0){
                printf("voce esta parecendo um blastoise");
        }
        else {
                printf("vai tomar no cu seu gordo fdp, vai perder banha porra");
        }
    return 0;}
