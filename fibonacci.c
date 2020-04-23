#include <stdio.h>

    int main () {

        int fibonacci[50],i;

        fibonacci[0]=1;
        fibonacci[1]=1;

        for(i=2;i<50;i++){
            fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        }

        printf("A sequencia fibonacci e:\n");

        for(i=0;i<50;i++){
            printf("%d\n",fibonacci[i]);
        }

    return 0;
    }
