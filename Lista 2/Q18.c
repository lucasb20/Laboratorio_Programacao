#include <stdio.h>
#include <math.h>

int main(){

    long unsigned int res=0;

    for(int i=1;i<=64;i++){
        res+=pow(2,i-1);
        printf("res: %lu\n",res);
    }

    printf("O resultado é %lu.",res);

    //Cara não consigo fazer mostrar um número maior que esse aqui não KKKKKKKKKKKK
    return 0;
}