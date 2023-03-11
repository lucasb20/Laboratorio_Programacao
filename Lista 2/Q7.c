#include <stdio.h>

int main(){

    int a,b;

    puts("Digite o primeiro valor. ");
    scanf("%d",&a);
    do{
        puts("Digite o segundo valor. (Não tente usar 0.)");
        scanf("%d",&b);
    }while(b==0);
    printf("Resultado: %.2f",((float)a)/b);
    return 0;
}