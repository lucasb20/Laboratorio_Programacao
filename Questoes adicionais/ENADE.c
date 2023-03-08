#include <stdio.h>

int main(){

    float m,n,x,prod=1;

    puts("Digite o M. ");
    scanf("%f",&m);
    puts("Digite o N. ");
    scanf("%f",&n);

    for(int i=m; i<=n; i++){
        x = i + (1/(float)i);
        prod = prod*x;
    }

    printf("O resultado do produtório é %f.\n",prod);

    return 0;
}