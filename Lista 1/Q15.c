#include <stdio.h>

int main(){

float dias_trab, salario;

puts("Digite a quantidade de dias trabalhados. ");
scanf("%f",&dias_trab);

if(dias_trab > 20){
  salario = dias_trab*1.3*0.9;
}
else if(dias_trab < 10){
  salario = dias_trab*0.9;
}
else{
  salario = dias_trab*0.9*1.2;
}

printf("O salário líquido vai ser de %.2f",salario);

return 0;
}
