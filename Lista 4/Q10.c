#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

void imprimir(int *, int);

int ocorrencia(int *,int,int);

int main(){
    int N=7,F[N],X[TAM];

    srand(time(NULL));

    for(int i=0;i<TAM;i++)X[i]=rand()%N;

    printf("Vetor X: ");
    imprimir(X,TAM);

    for(int i=0;i<N;i++){
        F[i]=ocorrencia(X,TAM,i);
    }

    printf("Vetor F: ");
    imprimir(F,N);

    return 0;
}

void imprimir(int *p, int t){
    for (int i=0; i<t; i++)printf("%d ",*(p+i));
    printf("\n");
}

int ocorrencia(int *p,int t,int i){
    int count=0;
    for(int k=0;k<t;k++){
        if(i==*(p+k))count++;
    }
    return count;
}
