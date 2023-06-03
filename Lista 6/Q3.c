#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct vetor{
    int *v;
    int tam;
    float media;
};

void preencher(struct vetor *o);
void imprimir(struct vetor *o);

int main(){
    srand(time(NULL));
    struct vetor x;

    x.tam = 5;

    x.v = calloc(x.tam,sizeof(int));

    preencher(&x);

    printf("Vetor x: \n");
    imprimir(&x);

    printf("Média: %.2f\n",x.media);

    return 0;
}

void imprimir(struct vetor *o){
    for(int i=0;i<o->tam;i++){
        printf("%2d ",o->v[i]);
    }
    printf("\n");
}

void preencher(struct vetor *o){
    float aux = 0;
    for(int i=0;i<o->tam;i++){
        o->v[i]=rand()%10+1;
        aux += o->v[i]/o->tam;
    }
    o->media = aux;
}