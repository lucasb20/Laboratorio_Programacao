#include <stdio.h>

int main(){

float valor_hora, horas_trab, INSS, sal_bruto, sal_liqui;

puts("Digite o valor por hora trabalhada. ");
scanf("%f",&valor_hora);
puts("Digite a quantidades de horas trabalhas no mês. ");
scanf("%f",&horas_trab);
puts("Digite o percetual do desconto do INSS. ");
scanf("%f",&INSS);

sal_bruto = valor_hora*horas_trab;
sal_liqui = sal_bruto*(1-INSS/100);

printf("O salário bruto é de %.2f, e o líquido é de %.2f",sal_bruto,sal_liqui);

return 0;
}
