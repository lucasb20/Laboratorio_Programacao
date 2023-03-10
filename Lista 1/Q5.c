#include <stdio.h>

int main(){

float conta_inicial, conta_final, taxa = 10;

puts("Digite o valor da conta inicial. ");
scanf("%f",&conta_inicial);

conta_final = conta_inicial*(1+taxa/100);

printf("A conta a ser paga é de: %.2f",conta_final);

return 0;
}
