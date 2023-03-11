#include <stdio.h>
#include <stdlib.h>

int main(){

    int f,res=1;

    puts("Digite o número. ");
    scanf("%d",&f);

    if(f==0){
        res = 1;
        printf("O resultado fatorial de %d é igual a %d.",f,res);
        exit(1);
    }

    for(int i=1;i<=f;i++){
        res = res*i;
    }
    
    printf("O resultado fatorial de %d é igual a %d.",f,res);

    return 0;
}