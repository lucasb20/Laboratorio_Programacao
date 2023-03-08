#include <stdio.h>

int main(){

float F,C;

puts("Digite a temperatura em graus Celsius. ");
scanf("%f",&C);

F = (C*9+160)/5;

printf("A temperatura em Fahrenheit é: %.2f",F);

return 0;
}
