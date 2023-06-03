#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void maior_menor(int*,int,int*);

int main(int argc,char **argv){
    if(argc != 2){
        printf("Formato: %s <num>\n",*argv);
        exit(1);
    }

    srand(time(NULL));

    int num = atoi(*(argv+1));

    int *v = calloc(num,sizeof(int));

    for(int i=0;i<num;i++){
        *(v+i) = rand()%20+1;
    }

    for(int i=0;i<num;i++){
        printf("%2d ",*(v+i));
    }
    printf("\n");

    int *extremidades=malloc(2*sizeof(int));

    maior_menor(v,num,extremidades);

    printf("O endereço do menor número é: %p [%d] e do maior: %p [%d].\n",extremidades,*extremidades,extremidades+1,*(extremidades+1));

    return 0;
}

void maior_menor(int *array,int tam, int *ref){
    *ref = *array;
    *(ref+1) = *array;
    
    for(int i=1;i<tam;i++){
        if(*(array+i)<*ref)*ref=*(array+i);
        if(*(array+i)>*(ref+1))*(ref+1)=*(array+i);
    }
}