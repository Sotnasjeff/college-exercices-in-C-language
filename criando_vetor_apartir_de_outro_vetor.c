#include <stdio.h>

    int main (){

        int vetor[10],i,x,j,vetor2[10];

            j=0;

        printf("Digite o valor de 10 elementos:\n");
            for(i=0;i<10;i++){
                printf("%d°:",i+1);
                scanf("%d",&vetor[i]);
            }

        printf("\nAgora digite o valor de X:\n");
        scanf("%d",&x);

            while(j<10){
                if(x==vetor[j]){
                    vetor2[j]=j+1;
                }
                j++;
            }

            printf("\nOs valores do novo vetor são:\n");

            for(j=0;j<10;j++){
                printf("%d\n",vetor2[j]);
            }

    return 0;
    }
