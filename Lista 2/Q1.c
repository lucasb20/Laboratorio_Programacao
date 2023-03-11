#include <stdio.h>

int main(){

    int n=1;
    
    while(n!=0){
    puts("Digite o número. ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    puts("Esse número equivale a domingo. ");
    break;
    case 2:
    puts("Esse número equivale a segunda-feira. ");
    break;
    case 3:
    puts("Esse número equivale a terça-feira. ");
    break;
    case 4:
    puts("Esse número equivale a quarta-feira. ");
    break;
    case 5:
    puts("Esse número equivale a quinta-feira. ");
    break;
    case 6:
    puts("Esse número equivale a sexta-feira. ");
    break;
    case 7:
    puts("Esse número equivale a sábado. ");
    break;
    default:
    puts("Número de dia não válido. ");
    }
    }

    return 0;
}