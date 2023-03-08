#include <stdio.h>

int main(){

    int n,a,b,c,new_n;

    puts("Digite um número de 3 algarismos. ");
    scanf("%d",&n);

    a = n/100;
    b = (n - a*100)/10;
    c = n - a*100 - b*10;

    new_n = c*100 + b*10 + a;

    printf("O número é %d",new_n);

    return 0;
}
