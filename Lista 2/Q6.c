#include <stdio.h>

int main(){

    int n,paulo=0,renata=0,branco=0,nulo=0;
    n = 1;

    while(n>=0){
        puts("Digite o número. ");
        scanf("%d",&n);
        switch(n){
            case 5:
            paulo++;
            break;
            case 7:
            renata++;
            break;
            case 0:
            branco++;
            break;
            default:
            nulo++;
        }
    }

    printf("Coragem:\nPaulo: %d\nRenata: %d\nBranco: %d\nNulo: %d\n",paulo,renata,branco,nulo);

    return 0;
}