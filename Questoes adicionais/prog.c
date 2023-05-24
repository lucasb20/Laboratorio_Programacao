#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct imagem{
    int tipo;
    int **matriz;
    int lin;
    int col;
    int max;
};

void imprimir(struct imagem o);

void preencher(struct imagem o);

int gerar_matriz(struct imagem *o);

void liberar_matriz(struct imagem *o);

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

    if(gerar_matriz(&obj)){
        puts("Faltou memória.");
        exit(1);
    }

    obj.tipo = 1;

    preencher(obj);

    imprimir(obj);

    liberar_matriz(&obj);

    return 0;
}

void preencher(struct imagem o){
    for(int i=0;i<o.lin;i++){
        for(int j=0;j<o.col;j++){
            *(*(o.matriz+i)+j)=rand()%(o.max+1);
        }
    }
}

int gerar_matriz(struct imagem *o){
    if(!(o->matriz = (int **)malloc(o->lin*sizeof(int*)))){
        return 1;
    }

    for(int i=0;i<o->lin;i++){
            if(!(o->matriz[i]=calloc(o->col,sizeof(int)))){
                return 1;
            }
    }

    return 0;
}

void liberar_matriz(struct imagem *o){
    for(int i=0;i<o->lin;i++){
        free(o->matriz[i]);
    }
    free(o->matriz);
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
