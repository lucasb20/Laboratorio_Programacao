#include <stdio.h>

int main(){

    int n=1,n_1=1,n_2;

    printf("%d\n",n);
    printf("%d\n",n_1);

    for(int i=1;i<=18;i++){
        n_2=n+n_1;
        n=n_1;
        n_1=n_2;
        printf("%d\n",n_2);
    }

    return 0;
}