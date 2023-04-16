#include <stdio.h>
#include <string.h>
#define TAM 30

void corrigir_enter(char nome[]);

int main(){
    char u[TAM],v[TAM],res[TAM+TAM],count_u=0,count_v=0;
    char *p=u,*q=v,*r=res;

    puts("Digite o primeiro nome. ");
    fgets(u,TAM,stdin);
    puts("Digite o segundo nome. ");
    fgets(v,TAM,stdin);
    
    corrigir_enter(u);
    corrigir_enter(v);

    while(*(p+count_u)!='\0')count_u++;
    while(*(p+count_v)!='\0')count_v++;

    for(int i=0;i<count_u;i++){
        *(r+i)=*(p+i);
    }

    for(int i=0;i<count_v;i++){
        *(r+count_u+i)=*(q+i);
    }

    printf("O resultado de é: %s.\n",res);

    return 0;
}

void corrigir_enter(char nome[]){
    int i=0;
    while(nome[i]!='\0'){
        if(nome[i]==10)nome[i]='\0';
        i++;
    }
}