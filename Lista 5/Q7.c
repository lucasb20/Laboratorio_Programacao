#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

float erro_medio_quad(int*,int);
void preencher(int*,int);
float mod(float);
float quad(float);
void imprimir(int*,int);

int main(){
    srand(time(NULL));
    int *A=malloc(TAM*sizeof(int));
    int *B=malloc(TAM*sizeof(int));

    preencher(A,TAM);
    preencher(B,TAM);

    printf("Matriz A: \n");
    imprimir(A,TAM);
    printf("Matriz B: \n");
    imprimir(B,TAM);
    puts("");

    printf("O erro médio quadrático de A: %.2f, erro médio quadrático em B: %.2f.\n",erro_medio_quad(A,TAM),erro_medio_quad(B,TAM));

    return 0;
}

void imprimir(int *v,int t){
    for(int i=0;i<t;i++){
        printf("%2d ",*(v+i));
    }
    printf("\n");
}

void preencher(int *v,int t){
    for(int i=0;i<t;i++){
        *(v+i)=rand()%10+1;
    }
}

float erro_medio_quad(int *v,int t){
    float media=0;
    for(int i=0;i<t;i++){
        media += *(v+i);
    }
    media/=t;

    float res=0;
    for(int i=0;i<t;i++){
        res += quad(mod(*(v+i)-media));
    }

    return res/t;
}

float mod(float a){
    if(a<0){
        return -a;
    }
    else{
        return a;
    }
}

float quad(float a){
    return a*a;
}