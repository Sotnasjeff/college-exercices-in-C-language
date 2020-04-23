#include <stdio.h>
#define N 10

    int main (){
        int vet[N],j,menor;

        printf("Digite os numeros do vetor:\n");
        for(j=0;j<N;j++){
            printf("%dº",j+1);
            scanf("%d",&vet[j]);
            menor=vet[0];
            if(vet[j]<menor){
                menor=vet[j];
            }
        }

        printf("\nO menor numero do vetor e:\n");
        printf("%d",menor);


    return 0;
    }
