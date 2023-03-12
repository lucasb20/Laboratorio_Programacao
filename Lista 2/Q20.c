#include <stdio.h>

int main(){

    int res=1;

    for(int i=1;i<=10;i++){
        if(i%2){
            for(int j=1; j<=i; j++)res*=j;
            printf("Fatorial de %d: %d\n",i,res);
            res=1;
        }
    }

    return 0;
}