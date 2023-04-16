#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define RAN 100
#define SHI 1

void imprimir(int *, int);

int main(){
    int v[TAM],*p=v;

    srand(time(NULL));

    for(int i=0;i<TAM;i++)*(p+i)=rand()%RAN+SHI;

    imprimir(p,TAM);

    for (int i=0; i<TAM-1; i++){
        for (int j=0; j<TAM-1; j++){
            if (*(p+j)<*(p+j+1)){
                *(p+j) = *(p+j)^*(p+j+1); 
                *(p+j+1) = *(p+j)^*(p+j+1); 
                *(p+j) = *(p+j)^*(p+j+1); 
            }          
        }
    }

    imprimir(p,TAM);

    return 0;
}

void imprimir(int *p, int t){
    for (int i=0; i<t; i++)printf("%d ",*(p+i));
    printf("\n");
}
