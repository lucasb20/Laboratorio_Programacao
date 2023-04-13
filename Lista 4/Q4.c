#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main(){
    int v[TAM],*p=v;
    
    srand(time(NULL));

    for(int i=0;i<TAM;i++){
        puts("Digite um número. ");
        scanf("%d",p+i);
    }

    for(int i=0;i<TAM;i++)printf("%d - [%p]\n",*(p+i),p+i);

    return 0;
}