#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define RAN 20

int main(){

    int v[TAM];
    float m_ari=0,m_geo=1;
    
    srand(time(NULL));

    for(int i=0;i<TAM;i++){
        v[i]=rand()%RAN;
        m_ari+=v[i];
        m_geo*=v[i];
    }

    for(int i=0;i<TAM;i++)printf("%d ",v[i]);
    printf("\n");

    m_ari=m_ari/TAM;
    m_geo=pow(m_geo,(1/(float)TAM));

    printf("A média aritmética é: %.2f e a média geométrica: %.2f.\n",m_ari,m_geo);

    return 0;
}