#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//definimos as variaveis globais
 int valor_numerico;


//funcao principal
int main (void){
    printf("digite o valor numerico inteiro,valor");
    //efetuar a leitura do valor numerico
    scanf("%d",&valor_numerico);
    valor_numerico = pow(valor_numerico,2);
    printf("o valor numerico elevado ao quadrado eh igual %d \n", valor_numerico);
    system ("pause");
    return 0;
}
