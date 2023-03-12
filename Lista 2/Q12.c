#include <stdio.h>

int main(){

    int n;

    puts("Digite o número. ");
    scanf("%d",&n);

    puts("A tabuada desse número é: ");
    for(int i=1;i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}