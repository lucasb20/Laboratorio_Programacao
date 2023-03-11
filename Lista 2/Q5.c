#include <stdio.h>

int main(){

    int n=1,M,m,i=1;

    while(n!=0){
        puts("Digite o número. ");
        scanf("%d",&n);
        if(i==1){
            M = n;
            m = n;
            i=0;
        }
        M = (n>M)?n:M;
        m = (n<m)?n:m;
        printf("Maior número até agora: %d\nMenor número até agora: %d\n",M,m);
    }

    return 0;
}
