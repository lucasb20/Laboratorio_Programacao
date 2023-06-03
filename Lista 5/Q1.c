#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv){
    if(argc != 4){
        printf("Formato: %s <num1> <num2> <operação>\n",*argv);
        exit(1);
    }
    int A = atoi(*(argv+1));
    int B = atoi(*(argv+2));
    int op = atoi(*(argv+3));

    printf("Resultado: %d\n",(op)?A+B:A*B);

    return 0;
}
