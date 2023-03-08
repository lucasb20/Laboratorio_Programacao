#include <stdio.h>

int main(){

float x, y;

puts("Digite o número. ");
scanf("%f",&x);

y = (x>=0)?x:x*(-1);

printf("O número em módulo é: %f",y);

return 0;
}
