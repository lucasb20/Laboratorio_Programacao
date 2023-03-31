#include <stdio.h>
#include <string.h>
#define TAM 30

int main(){
    //Com strcmp
    char s1[TAM],s2[TAM];

    puts("Digite um nome. ");
    fgets(s1,TAM,stdin);

    puts("Digite outro nome. ");
    fgets(s2,TAM,stdin);

    printf("Com strcmp: As duas strings digitas são %s.\n",(!strcmp(s1,s2))?"iguais":"diferentes");

    //Sem strcmp
    int dif, k=0;
    while(k<TAM){
        if(s1[k]!=s2[k])dif++;
        k++;
    }

    printf("Sem strcmp: As duas strings digitas são %s.\n",(dif)?"diferentes":"iguais");

    return 0;
}