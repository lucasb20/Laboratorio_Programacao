#include <stdio.h>

int main(){

float real,dolar,conv;

puts("Digite o valor em real a ser convertido. ");
scanf("%f",&real);
puts("Digite o valor da cotação do dólar");
scanf("%f",&conv);

dolar = real/conv;

printf("O valor em dólar é: %.2f",dolar);

return 0;
}
