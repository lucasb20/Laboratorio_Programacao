#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAN 16
#define SHI 0

struct imagem{
    int tipo;
    int **matriz;
    int lin;
    int col;
    int max;
};

void imprimir(struct imagem o);

void preencher(struct imagem o);

int main(int argc,char **argv){
    if(argc != 4){
        printf("%s <lin> <col> <max>\n",*argv);
        exit(1);
    }

    srand(time(NULL));

    struct imagem obj;

    obj.lin = atoi(*(argv+1));
    obj.col = atoi(*(argv+2));
    obj.max = atoi(*(argv+3));

    obj.matriz = (int **)malloc(obj.lin*sizeof(int*));

    if(!(obj.matriz)){
        puts("Faltou memória.");
        exit(1);
    }

    for(int i=0;i<obj.lin;i++){
        *(obj.matriz+i)=calloc(obj.col,sizeof(int));
        if(!(*(obj.matriz+i))){
            puts("Faltou memória.");
            exit(1);
        }
    }

    obj.tipo = 1;

    preencher(obj);

    imprimir(obj);

    return 0;
}

void preencher(struct imagem o){
    for(int i=0;i<o.lin;i++){
        for(int j=0;j<o.col;j++){
            *(*(o.matriz+i)+j)=rand()%RAN+SHI;
        }
    }
}

void imprimir(struct imagem o){
    printf("%s\n",o.tipo?"P2":"BIN");
    printf("#prog.pgm\n");
    printf("%d %d\n",o.lin,o.col);
    printf("%d\n",o.max);
    for(int i=0;i<o.lin;i++){
        for(int j=0;j<o.col;j++){
            printf("%2d ",*(*(o.matriz+i)+j));
        }
        printf("\n");
    }
    printf("\n");
}