#include <stdio.h>

int main(){

    int num,menor;
    int *p=&num,*m=&menor;
    
    do{
        puts("Digite um número. Para sair do programa, digite o número da besta.");
        scanf("%d",p);

        if(*p<*m)*m=*p;

        printf("O menor número digitado até agora foi %d.\n",*m);
    }while(*p!=666);

    return 0;
}