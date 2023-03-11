#include <stdio.h>

int main(){

    int A,B;

    puts("Digite um número do intervalo. ");
    scanf("%d",&A);
    puts("Digite outro número do intervalo. ");
    scanf("%d",&B);

    if(A>B){
        A=A^B;
        B=A^B;
        A=A^B;
    }

    for(int i=A;i<=B;i++){
        (i%4)?0:printf("%d\n",i);
    }

    return 0;
}