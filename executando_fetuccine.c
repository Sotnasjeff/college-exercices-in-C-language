#include <stdio.h>

    int main () {

        int fetuccine[50],i;

        i=2;

        printf("Digite dois numeros para a sequencia de fetuccine:\n");
        scanf("%d %d",&fetuccine[0],&fetuccine[1]);

        printf("\nA sequencia de fetuccine e:\n");
        while(i<50){
            if(i%2==0){
                fetuccine[i]=fetuccine[i-1]-fetuccine[i-2];
            }
            else{
                fetuccine[i]=fetuccine[i-1]+fetuccine[i-2];
            }
        i++;
        }

        for(i=0;i<=50;i++){
            printf("%d\n",fetuccine[i]);
        }

    return 0;

    }
