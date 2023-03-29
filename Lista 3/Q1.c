#include <stdio.h>
#define TAM 15

void imprimirV(float vetor[TAM]);

int main(){

    float v[TAM],menor,maior;

    for(int i=0;i<TAM;i++)v[i]=((float) (i+1)*10/7);

    menor = v[0];
    maior = v[0];
    for(int i=1;i<TAM;i++){
        if(v[i]<menor)menor=v[i];
        if(v[i]>maior)maior=v[i];
    }

    imprimirV(v);

    printf("A soma do menor elemento pelo maior é %.2f.\n",maior+menor);

    return 0;
}

void imprimirV(float vetor[TAM]){
    for(int i=0;i<TAM;i++)printf("%.2f\n",vetor[i]);
    puts("");
}