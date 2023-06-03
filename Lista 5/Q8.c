#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int**,int,int);
void imprimir(int**,int,int);
int preencher_binario(int,int);

int main(int argc,char **argv){
    if(argc != 3){
        printf("Formato: %s <lin> <col>\n",*argv);
        exit(1);
    }

    srand(time(NULL));

    int **m,t=10, lin = atoi(*(argv+1)), col = atoi(*(argv+2));

    m = (int**) malloc(lin*sizeof(int*));
    for(int i=0;i<lin;i++) *(m+i)=calloc(col,sizeof(int));

    preencher(m,lin,col);
    puts("Matriz M: ");
    imprimir(m,lin,col);
    puts("");

    int **s;
    s = (int**) malloc(lin*sizeof(int*));
    for(int i=0;i<lin;i++) *(s+i)=calloc(col,sizeof(int));

    for(int i=0;i<lin;i++){
        for(int j=0;j<col;j++){
            *(*(s+i)+j) = preencher_binario(*(*(m+i)+j),t);
        }
    }

    puts("Matriz S: ");
    imprimir(s,lin,col);
    puts("");

    return 0;
}


void imprimir(int **v,int l,int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%2d ",*(*(v+i)+j));
        }
        printf("\n");
    }
    printf("\n");
}

void preencher(int **v,int l,int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            *(*(v+i)+j) = rand()%100+1;
        }
    }
}

int preencher_binario(int v,int t){
    if(v>t){
        return 1;
    }
    else{
        return 0;
    }
}