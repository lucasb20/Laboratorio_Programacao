#include <stdio.h>
#include <string.h>

struct professor{
    char nome[15];
    int eixo_ensinado;
};

struct disciplina{
    char nome[15];
    struct professor p;
};


int main(){
    struct disciplina d;
    strcpy(d.nome,"Laboratório");
    strcpy(d.p.nome,"Daniel");
    d.p.eixo_ensinado = 5;

    return 0;
}