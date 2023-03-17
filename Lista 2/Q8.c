#include <stdio.h>

int main(){

    float valor, entrada=0;
    int p=-1;

    puts("Digite o valor do produto. ");
    scanf("%f",&valor);

    //entrada + p + p = valor;
    //entrada >= p;

    for(;;){
        p++;
        entrada = valor -2*p;
        if(p>entrada){
            p--;
            entrada = valor -2*p;
            break;
            }
    }
    printf("O valor da entrada será %.2f e as duas prestrações serão de %d.\n",entrada,p);

    return 0;
}