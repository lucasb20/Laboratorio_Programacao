#include <stdio.h>

int main(){

float comp, altura, largura;

puts("Digite seu comprimento.");
scanf("%f",&comp);
puts("Digite sua altura.");
scanf("%f",&altura);
puts("Digite sua largura.");
scanf("%f",&largura);

printf("O valor do volume é: %.2f",comp*altura*largura);

return 0;
}
