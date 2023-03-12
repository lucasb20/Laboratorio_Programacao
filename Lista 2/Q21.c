#include <stdio.h>

int main(){

    int n,n_2,a,b,c,d,e;

    puts("Digite um número de 5 algarismos. ");
    scanf("%d",&n);

    a = n/10000;
    b = (n - a*10000)/1000;
    c = (n - a*10000 - b*1000)/100;
    d = (n - a*10000 - b*1000 - c*100)/10;
    e = n - a*10000 - b*1000 - c*100 - d*10;

    n_2 = e*10000 + d*1000 + c*100 + b*10 + a;

    (n==n_2)?puts("É um número palíndromo. "):puts("Não é um número palíndromo. ");

    return 0;
}