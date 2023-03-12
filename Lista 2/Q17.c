#include <stdio.h>

int main(){

    for(int c=10;c<=100;c+=10)printf("%d graus Celsius, %.0f graus fahrenheit.\n",c,((float)c)*9/5+32);

    return 0;
}