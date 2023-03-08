#include <stdio.h>
#include <math.h>

int main(){

float x1, y1, x2, y2,d;

puts("Digite o X do primeiro ponto.");
scanf("%f",&x1);
puts("Digite o Y do primeiro ponto.");
scanf("%f",&y1);
puts("Digite o X do segundo ponto.");
scanf("%f",&x2);
puts("Digite o Y do segundo ponto.");
scanf("%f",&y2);

d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));

printf("O valor é %.2f",d);

return 0;
}
