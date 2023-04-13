    #include <stdio.h>

    #define TAM 30

    int main(){
        char n1[TAM],n2[TAM],*p=n1,*q=n2;

        puts("Digite um nome. ");
        fgets(n1,TAM,stdin);

        int i=0;
        while(*(p+i)!='\0'){
            if(*(p+i)==10){
                *(p+i)='\0';
                break;
            }
            *(q+i)=*(p+i);
            i++;
        }
        *(q+(i+1))='\0';

        printf("O primeiro nome é: %s\nO segundo nome é: %s\n",n1,n2);

        return 0;
    }