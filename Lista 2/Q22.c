#include <stdio.h>
#include <math.h>

int main(){

    int n,q,q_7=0;

    puts("Digite um número. ");
    scanf("%d",&n);

    q = n;
    while(q!=0){
        if(q%10==7)q_7++;
        q = (q - q%10)/10;
    }

    printf("A quantidade de algarismos 7 nesse número é %d.\n",q_7);

    return 0;
}
