#include <stdio.h>

    int main (){

        int vetor[10],i,x,j,cont;

            j=0;

        printf("digite o valor de 10 elementos:\n");
            for(i=0;i<10;i++){
                printf("%d°:",i+1);
                scanf("%d",&vetor[i]);
            }

        printf("\nAgora digite um valor de um elemento x:");
        scanf("%d",&x);

            while(j<10){
                if(x==vetor[j]){
                   cont=j+1;
                }
                j++;
            }

            printf("\nO valor x: %d aparece %d vezes no vetor",x,cont);

    return 0;
    }
