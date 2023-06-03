#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int**,int,int);
void imprimir(int**,int,int);

int main(){
    srand(time(NULL));

    int **m,tam=5;

    m = (int**) malloc(tam*sizeof(int*));
    for(int i=0;i<tam;i++) *(m+i)=calloc(tam,sizeof(int));

    preencher(m,tam,tam);
    puts("Matriz: ");
    imprimir(m,tam,tam);
    puts("");

    int aux=0;

    for(int i=0;i<tam;i++){
        aux+= *(*(m+i)+i);
    }

    printf("O resultado é: %d, logo é %s.\n",aux,(aux%2)?"ímpar":"par");

    return 0;
}


void imprimir(int **v,int l,int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%2d ",*(*(v+i)+j));
        }
        printf("\n");
    }
    printf("\n");
}

void preencher(int **v,int l,int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            *(*(v+i)+j) = rand()%100+1;
        }
    }
}

int preencher_binario(int v,int t){
    if(v>t){
        return 1;
    }
    else{
        return 0;
    }
}