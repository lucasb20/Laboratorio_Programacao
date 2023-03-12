#include <stdio.h>

int main(){

    int A,B,count=0;

    puts("Digite um ponto da faixa. ");
    scanf("%d",&A);
    puts("Digite outro ponto da faixa. ");
    scanf("%d",&B);

    if(A>B){
        A = A^B;
        B = A^B;
        A = A^B;
    }

    for(int i=A; i<=B;i++){
        count = (i%3)?count:count+1;
    }

    printf("O intervalo escrito possui %d números múltiplos de 3. ",count);

    return 0;
}