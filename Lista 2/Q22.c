#include <stdio.h>
#include <math.h>

int main(){

    int n,i=0,q,q_7=0;

    puts("Digite um número. ");
    scanf("%d",&n);

    while(n>=pow(10,i))i++;
    i--;

    while(i>=0){
        q = n/pow(10,i);
        if(q==7)q_7++;
        printf("q (%d/%f) = %d, q_7 = %d\n",n,pow(10,i),q,q_7);
        i--;
    }

    printf("A quantidade de algarismos 7 nesse número é %d.\n",q_7);

    return 0;
}