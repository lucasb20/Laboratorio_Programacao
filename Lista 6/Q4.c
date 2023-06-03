#include <stdio.h>

struct aluno{
    float nota[2];
    float media;
};

int main(int argc,char **argv){
    struct aluno a[3];

    for(int i=0;i<3;i++){
        a[i].nota[0]=rand()%11;
        a[i].nota[1]=rand()%11;
    }

    for(int i=0;i<3;i++){
        calc_media(&a[i]);
    }

    return 0;
}

void calc_media(struct aluno *a){
    a->media = (a->nota[0]+a->nota[1])/2;
}