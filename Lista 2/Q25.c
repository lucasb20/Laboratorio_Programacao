#include <stdio.h>
#include <math.h>

int main(){

    int i=0;
    float res=4;

    for(;;){
        if(i>=1)res = res+(4*pow(-1,i))/(3+2*((float)i-1));
        printf("Teste %d: %.4f\n",++i,res);
    }

    return 0;
}