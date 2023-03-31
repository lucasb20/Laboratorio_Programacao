#include <stdio.h>
#include <string.h>
#define TAM 30

void corrigir_enter(char nome[]);

int main(){
//Com strcat
    char u[TAM],v[TAM];

    puts("Digite o primeiro nome. ");
    fgets(u,TAM,stdin);
    puts("Digite o segundo nome. ");
    fgets(v,TAM,stdin);
    
    corrigir_enter(u);
    corrigir_enter(v);

    printf("Com strcat, o resultado é: %s.\n",strcat(u,v));
//Sem strcat
    char res[TAM+TAM],count_u=0,count_v=0;

    while(u[count_u]!='\0')count_u++;
    while(v[count_v]!='\0')count_v++;

    for(int i=0;i<TAM+TAM;i++){
        res[i]=u[i];
        res[count_u+i]=v[i];
    }

    printf("Sem strcat, o resultado é: %s.\n",res);
    return 0;
}

void corrigir_enter(char nome[]){
    int i=0;
    while(nome[i]!='\0'){
        if(nome[i]==10)nome[i]='\0';
        i++;
    }
}