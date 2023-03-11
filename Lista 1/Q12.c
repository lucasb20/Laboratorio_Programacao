#include <stdio.h>

int main(){

int A,B;

puts("Digite o primeiro número. ");
scanf("%d",&A);
puts("Digite o segundo número. ");
scanf("%d",&B);

printf("A soma: %d, o produto: %d, a diferença: %d, o quociente: %d, e o resto da divisão: %d.",A+B,A*B,A-B,A/B,A%B);

return 0;
}
