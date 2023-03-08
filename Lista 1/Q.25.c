
#include <stdio.h>

int main(){

int seg,h,m,s,aux;

puts("Digite quantos segundos deseja converter. ");
scanf("%d",&seg);

h = seg/3600;
aux = seg % 3600;
m = aux/60;
s = aux%60;

printf("Esse tempo vale %d horas, %d minutos e %d segundos.",h,m,s);

return 0;
}
