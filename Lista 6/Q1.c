#include <stdio.h>

struct aluno{
    float nota[2];
    float media;
};

int main(int argc,char **argv){
    struct aluno a;

    puts("Digite primeira nota.");
    scanf("%f",&a.nota[0]);
    puts("Digite segunda nota.");
    scanf("%f",&a.nota[1]);

    a.media = (a.nota[0] + a.nota[1])/2;

    return 0;
}