#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100
#define RAN 100
#define SHI 1

void imprimir(int vetor[],int t);

int main(){
    //seleção
    int v[TAM];

    srand(time(NULL));

    for(int i=0;i<TAM;i++)v[i]=rand()%RAN+SHI;

    puts("Vetor: ");
    imprimir(v,TAM);

    for(int i=0;i<TAM-1;i++){
        for(int j=i+1;j<TAM;j++){
            if(v[i]>v[j]){
                v[i]=v[i]^v[j];
                v[j]=v[i]^v[j];
                v[i]=v[i]^v[j];
            }
        }
    }

    printf("Ordenado por seleção: \n");
    imprimir(v,TAM);

    //Bolha (gerando outro vetor porque o anterior já está ordenado.)
    
    for(int i=0;i<TAM;i++)v[i]=rand()%RAN+SHI;

    puts("Vetor: ");
    imprimir(v,TAM);

    for(int i=0;i<TAM-1;i++){
        for(int j=0;j<TAM-1;j++){
            if(v[j]>v[j+1]){
                v[j]=v[j]^v[j+1];
                v[j+1]=v[j]^v[j+1];
                v[j]=v[j]^v[j+1];
            }
        }
    }

    printf("Ordenado por bolha: \n");
    imprimir(v,TAM);

    return 0;
}

void imprimir(int vetor[],int t){
    for(int i=0;i<t;i++)printf("%d ",vetor[i]);
    printf("\n\n");
}