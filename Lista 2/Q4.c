#include <stdio.h>

int main(){

    int i=1,j=150,p=110;

    while(j>=p){
        j=j+2;
        p=p+3;
        i++;
    }
    printf("Precisou de %d anos.\n",i-1);

    return 0;
}