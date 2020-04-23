#include <stdio.h>

    int main (){
        /*declarando variavel*/
        int valor, cont;

        cont=0;
        printf("Digite os valores, 0 encerra");
        scanf("%d",&valor);

            while (valor!=0) {
                cont++;
                    printf("Digite o valor seguinte, 0 encerra");
                    scanf("%d",&valor);
            }

            printf("\nForam digitados %d valores diferentes de zero\n",cont);

    return 0;
    }
