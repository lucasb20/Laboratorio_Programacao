//Vetor X aleatório, tamanho N, armazena em *p endereços X pares, e em *q endereços X ímpares.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAN 100
#define SHI 1

void gerar_vetor(int *,int,int,int);
void imprimir(int *,int);

int main(){
    int *x,n,*p,*q,imp=0,par=0;

    srand(time(NULL));

    puts("Digite um número. ");
    scanf("%d",&n);

    x = malloc(n*sizeof(int));

    if(x==0){
        puts("Faltou memória.");
        exit(1);
    }

    gerar_vetor(x,n,RAN,SHI);

    printf("Vetor X:\n");
    imprimir(x,n);

    for(int i=0; i<n;i++){
        if(!(*(x+i)%2)){
            p=malloc(par*sizeof(int));
            *(p+par)=*(x+i);
            par++;
        }
        else{
            q=malloc(imp*sizeof(int));
            *(q+imp)=*(x+i);
            imp++;
        }
    }

    printf("Vetor P:\n");
    imprimir(p,par);
    printf("Vetor Q:\n");
    imprimir(q,imp);

    return 0;
}

void gerar_vetor(int *p,int t,int R,int S){
    for(int i=0;i<t;i++)*(p+i)=rand()%R+S;
}

void imprimir(int *p,int t){
    for(int i=0;i<t;i++)printf("[%p]%d ",p+i,*(p+i));
    printf("\n");
}