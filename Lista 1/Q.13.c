#include <stdio.h>

int main(){

int A, B;

puts("Digite a primeira variável. ");
scanf("%d",&A);
puts("Digite a segunda variável. ");
scanf("%d",&B);

A = A^B;
B = A^B;
A = A^B;

printf("A = %d, B = %d",A,B);

return 0;
}
