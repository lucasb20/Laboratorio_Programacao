#include <stdio.h>
#define TAM 30

int main(){

    char nome[TAM];

    puts("Digite um nome. ");
    fgets(nome,TAM,stdin);

    int i=0;
    while(nome[i]!='\0')i++;

    i--;
    //O "enter" está sendo contado pelo fgets como parte da string, e agora?
    printf("O nome %s tem %d caracteres.\n",nome,i);

    return 0;
}