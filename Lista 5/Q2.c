#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    int *menor = v;
    for(int i=1;i<num;i++){
        if(*(v+i)<*menor)menor=v+i;
    }

    printf("O endereço do menor número é: %p [%d].\n",menor,*menor);

    return 0;
}