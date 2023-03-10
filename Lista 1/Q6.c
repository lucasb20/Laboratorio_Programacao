#include <stdio.h>

int main(){

int sex;
float h, peso;

puts("Digite a altura em metros. ");
scanf("%f",&h);
puts("Digite o sexo, 0 para homem e 1 para mulher. ");
scanf("%d",&sex);

peso=sex?62.1*h-44.7:72.7*h-58;

printf("O peso ideal é %.2f.",peso);

return 0;
}
