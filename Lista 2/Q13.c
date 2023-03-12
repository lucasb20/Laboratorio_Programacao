#include <stdio.h>

int main(){

    int A,B,res=0;

    puts("Digite um ponto da faixa. ");
    scanf("%d",&A);
    puts("Digite outro ponto da faixa. ");
    scanf("%d",&B);

    if(A>B){
        A = A^B;
        B = A^B;
        A = A^B;
    }

    for(int i=A;i<=B;i++){
        if(i%2==0)res=res+i;
    }

    printf("O resultado é: %d.",res);

    return 0;
}