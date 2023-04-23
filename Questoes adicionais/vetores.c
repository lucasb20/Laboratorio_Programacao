//Vetor X aleatório, tamanho N, armazena em *p endereços X pares, e em *q endereços X ímpares.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAN 100
#define SHI 1

void gerar_vetor(int *,int,int,int);
void imprimir(int *,int);

int main(){
    int *x,n,**p,**q,imp=0,par=0;

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
    printf("\n");

    for(int i=0; i<n;i++)*(x+i)%2?imp++:par++;

    p=(int **)malloc(par*sizeof(int*));
    q=(int **)malloc(imp*sizeof(int*));

    for(int i=0; i<par; i++)for(int j=0;j<n;j++)if(!(*(x+j)%2))*(p+i)=x+j;

    for(int i=0; i<imp; i++)for(int j=0;j<n;j++)if(*(x+j)%2)*(q+i)=x+j;

    printf("Vetor P:\n");
    for(int i=0;i<par;i++)printf("%p [%d]\n",*(p+i),*(*(p+i)));
    printf("\n");
    printf("Vetor Q:\n");
    for(int i=0;i<imp;i++)printf("%p [%d]\n",*(q+i),*(*(q+i)));

    return 0;
}

void gerar_vetor(int *p,int t,int R,int S){
    for(int i=0;i<t;i++)*(p+i)=rand()%R+S;
}

void imprimir(int *p,int t){
    for(int i=0;i<t;i++)printf("[%p]%d ",p+i,*(p+i));
    printf("\n");
}
