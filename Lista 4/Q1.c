#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int a,b,s;
    int *p=&a,*q=&b,*soma=&s;

    *p=rand()%100+1;
    *q=rand()%100+1;

    *soma = *p + *q;

    printf("A soma de %d com %d é %d [%p]\n", *(p+0), *(p+1), *soma, soma);

    return 0;
}