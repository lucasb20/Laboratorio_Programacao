#include <stdio.h>

int main(){

int x;

puts("Digite um número inteiro: ");
scanf("%d",&x);

printf("Triplo: %d, quadrado: %d e meio: %.1f",3*x,x*x,((float)x)/2);

return 0;
}
