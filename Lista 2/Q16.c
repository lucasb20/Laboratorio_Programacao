#include <stdio.h>

int main(){

    int count_3=0,count_5=0;

    for(int i=0;i<=200;i++){
        if(i%3==0 && i<=100)count_3++;
        if(i%5==0 && i>100)count_5++;
    }
    printf("Há %d múltiplos de 3 entre 0 e 100 e %d múltiplos de 5 entre 100 e 200.",count_3,count_5);

    return 0;
}