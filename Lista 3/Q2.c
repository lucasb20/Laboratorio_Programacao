#include <stdio.h>
#define TAM 20

int main(){

    char nome[TAM],letra;

    puts("Informe um nome. ");
    scanf("%s",&nome);
    puts("Informe uma letra. ");
    scanf("%c",&letra);

    int i=0;
    int count=0;
    while(nome[i]!='\0')if(nome[i++]==letra)count++;

    //No nome Alan, levando a variável letra como "a", a letra maiúscula não é contada, e vice-versa.
    //Infelizmente nem imagino como resolver isso ainda.
    printf("O caractere %c aparece %d vezes no nome %s.",letra,count,nome);

    return 0;
}