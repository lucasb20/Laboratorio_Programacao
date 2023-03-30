#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 4
#define COL 4
#define RAN 100

int main(){

    int m[LIN][COL],x,count=0;

    srand(time(NULL));

    puts("Digite um X. ");
    scanf("%d",&x);

    for(int i=0;i<LIN;i++){
        for(int j=0;j<COL;j++){
            m[i][j] = rand()%RAN;
        }
    }

    for(int i=0;i<LIN;i++){
        for(int j=0;j<COL;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<LIN;i++)for(int j=0;j<COL;j++)if(x==m[i][j])count++;

    printf("O número %d aparece %d vezes na matriz.\n",x,count);

    return 0;
}