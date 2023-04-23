//Vetor X aleatório, tamanho N, armazena em *p endereços X pares, e em *q endereços X ímpares.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAN 100
#define SHI 1

void gerar_vetor(int *,int,int,int);
void imprimir(int *,int);

int main(){
    int *x,n,**p,**q,TAMp=0,TAMq=0;

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

    for(int i=0; i<n;i++)*(x+i)%2?TAMq++:TAMp++;
    p=(int **)malloc(TAMp*sizeof(int*));
    q=(int **)malloc(TAMq*sizeof(int*));

    int par=0,imp=0;
    for(int i=0; i<n; i++){
        if(!(*(x+i)%2)){
            *(p+par)=(x+i);
            par++;
        }
        else{
            *(q+imp)=(x+i);
            imp++;
        }
    }

    printf("Vetor P:\n");
    for(int i=0;i<par;i++)printf("%p [%d]\n",*(p+i),**(p+i));
    printf("\n");
    printf("Vetor Q:\n");
    for(int i=0;i<imp;i++)printf("%p [%d]\n",*(q+i),**(q+i));

    free(x);
    free(p);
    free(q);

    return 0;
}

void gerar_vetor(int *p,int t,int R,int S){
    for(int i=0;i<t;i++)*(p+i)=rand()%R+S;
}

void imprimir(int *p,int t){
    for(int i=0;i<t;i++)printf("[%p]%d ",p+i,*(p+i));
    printf("\n");
}
