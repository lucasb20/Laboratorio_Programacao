#include <stdio.h>

int main(){

float x;

x = 7 + 3*6/2-1;
//Começará pelo 3*6=18, seguirá para a divisão 18/2=9, e finalmente o resto das somas, 7 +9 -1 = 15.
x = 2%2 + 2*2-2/2;
//Começará pelo 2%2 que resulta em 0, seguirá para multiplicação 2*2=4, e também 2/2=1, e finalmente somará tudo, 0 +4 -1 = 3.
x = (3 * 9 * (3 + (9*3/ (3) ) ) );
//Começará pelo parentese central, 9*3/(3) = 9, e então 3 + 9 = 12, e por fim as multiplicações, 3 * 9 * 12 = 324.

return 0;
}
