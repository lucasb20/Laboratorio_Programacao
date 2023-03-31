#include <stdio.h>
#define TAM 30

int main(){

    char s[TAM],v[TAM],count=0;

    puts("Digite o nome. ");
    fgets(s,TAM,stdin);

    int i=0;
    while(s[i]!='\0'){
        if(s[i]==10){
            s[i]='\0';
            continue;
        }
        i++;
    }

    for(int j=0;j<TAM;j++){
        v[j]=s[(i-1)-j];
    }

    puts(v);

    return 0;
}