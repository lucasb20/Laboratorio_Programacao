#include <stdio.h>

int main(){

    int A,B,res;

    puts("Digite um ponto da faixa. ");
    scanf("%d",&A);
    puts("Digite outro ponto da faixa. ");
    scanf("%d",&B);

    if(A>B){
        A=A^B;
        B=A^B;
        A=A^B;
    }

    for(int i=A;i<=B;i++)res+=i;
    printf("O resultado é %.2f",((float)res)/(B-A));

    return 0;
}