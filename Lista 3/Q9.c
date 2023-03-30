#include <stdio.h>
#define LIN 3
#define COL 3

int main(){

    int m[LIN][COL];

    for(int i=0;i<LIN;i++){
        for(int j=0;j<COL;j++){
            printf("Digite o termo m[%d][%d] da matriz.\n",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0;i<LIN;i++){
        for(int j=0;j<COL;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    puts("Os termos da diagonal principal são: ");
    for(int i=0;i<LIN;i++)printf("%d ",m[i][i]);

    return 0;
}