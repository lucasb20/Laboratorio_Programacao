#include <stdio.h>

int main(){

int a,b;

puts("Digite o primeiro número. ");
scanf("%d",&a);
puts("Digite o segundo número. ");
scanf("%d",&b);

(a%b)?printf("O primeiro número não é múltiplo do segundo."):printf("O primeiro número é múltiplo do segundo.");

return 0;
}
