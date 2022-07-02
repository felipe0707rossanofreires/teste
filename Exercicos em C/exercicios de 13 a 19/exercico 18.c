#include <stdio.h>
#include <stdlib.h>

//definimos as variaveis globais

float cotacao_dolar, qtd_dolar, resultado;


//funcao principal
int main(void){
    printf ("informe o valor da qtd em dolar");
    //digitar o valor em dolar
    scanf("%f",&qtd_dolar);

    //fazer a conversao de dolar para real
    printf("informe o valor da cotacao");
    scanf("%f",&cotacao_dolar);

    resultado=qtd_dolar*cotacao_dolar;

   printf("o valor em reais eh:%f\n",resultado);


    system("pause");
    return 0;
}
