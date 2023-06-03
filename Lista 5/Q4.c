#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int min(int *);
int max(int *);

int main(){
    srand(time(NULL));
    int *x=malloc(TAM*sizeof(int));
    float *x_2=malloc(TAM*sizeof(float));

    for(int i=0;i<TAM;i++)*(x+i)=rand()%100+1;

    for(int i=0;i<TAM;i++){
        *(x_2+i)=(*(x+i)-min(x))/(max(x)-min(x));
    }

    return 0;
}

int min(int *v){
    int menor=*v;
    for(int i=1;i<TAM;i++)if(*(v+i)<menor)menor=*(v+i);
    return menor;
}

int max(int *v){
    int maior=*v;
    for(int i=1;i<TAM;i++)if(*(v+i)>maior)maior=*(v+i);
    return maior;
}