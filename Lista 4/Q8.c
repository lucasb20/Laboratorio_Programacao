    #include <stdio.h>
    #define TAM 30

    void corrigir_enter(char nome[]);

    int main(){
        char nome[TAM],c,*p=0;

        puts("Digite um nome. ");
        fgets(nome,TAM,stdin);
        puts("Digite um caracter a procurar. ");
        scanf("%c",&c);
        
        corrigir_enter(nome);
        
        int count = 0;
        for(int i=0;i<TAM;i++)if(nome[i]==c)printf("O caracter %c foi encontrado na posição %d.\n",c,i);

        return 0;
    }

    void corrigir_enter(char nome[]){
    int i=0;
    while(nome[i]!='\0'){
        if(nome[i]==10)nome[i]='\0';
        i++;
    }
}