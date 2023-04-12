#include <stdio.h>

void printar(int,int);

int main(){

    int a,b;
    int *p1=&a,*p2=&b;

    puts("Digite um número. ");
    scanf("%d",p1);
    puts("Digite outro número. ");
    scanf("%d",p2);

    printar(*p1,*p2);

    puts("");

    *p1 = *p1^*p2;
    *p2 = *p1^*p2;
    *p1 = *p1^*p2;

    printar(*p1,*p2);

    return 0;
}

void printar(int num1,int num2){
    printf("O primeiro número: %d\nO segundo número: %d",num1,num2);
    printf("\n");
}