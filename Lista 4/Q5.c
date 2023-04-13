    #include <stdio.h>

    #define TAM 30

    int main(){
        char nome[TAM],*p=nome;

        puts("Digite um nome. ");
        fgets(nome,TAM,stdin);

        int i=0;
        while(*(p+i)!='\0'){
            if(*(p+i)==10)break;
            i++;
        }

        printf("O nome digitado possui %d caracters.",i);

        return 0;
    }