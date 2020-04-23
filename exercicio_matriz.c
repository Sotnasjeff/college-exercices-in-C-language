#include <stdio.h>

    int main (){

    int matriz1[3][3],array[3],i,j,soma=0;

    printf("Digite os numeros da primeira matriz:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("coluna %d, linha %d:\n",i+1,j+1);
                scanf("%d",&matriz1[j][i]);
                array[j]=matriz1[0][j]+matriz1[1][j]+matriz1[2][j];
            }
        }


        for(i=0;i<3;i++){
            printf("%d: %d\n",i+1,array[i]);
        }

    return 0;
    }
