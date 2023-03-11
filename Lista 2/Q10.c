#include <stdio.h>

int main(){

    for(int i=15;i<=90;i++){
        (i%4)?0:printf("%d\n",i);
    }

    return 0;
}