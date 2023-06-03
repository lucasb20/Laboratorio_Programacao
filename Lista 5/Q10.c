#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

void imprimir(int *, int);

int coocorrencia(int *,int *,int,int,int);

void imprimirMatriz(int *,int,int);

void gerar_vetor(int *,int,int);

int main(){
    int X[TAM],Y[TAM],N=7,M[N*N],*m=M;

    srand(time(NULL));

    gerar_vetor(X,N,0);
    gerar_vetor(Y,N,0);

    printf("Vetor X: ");
    imprimir(X,TAM);
    printf("Vetor Y: ");
    imprimir(Y,TAM);

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            *(m+i*N+j)=coocorrencia(X,Y,TAM,i,j);
        }
    }

    imprimirMatriz(m,N,N);

    return 0;
}

void imprimir(int *p, int t){
    for (int i=0; i<t; i++)printf("%d ",*(p+i));
    printf("\n");
}

void gerar_vetor(int *p,int RAN,int SHI){
    for(int i=0;i<TAM;i++)*(p+i)=rand()%RAN+SHI;
}


void imprimirMatriz(int *m,int L,int C){
    for(int i=0;i<C*L;i++){
        if(!(i%L))printf("\n");
        printf("%d ",*(m+i));
    }
    printf("\n");
}

int coocorrencia(int *p,int *q,int t,int i,int j){
    int count=0;
    for(int k=0;k<t;k++){
        if(*(p+k)==i && *(q+k)==j)count++;
    }
    return count;
}