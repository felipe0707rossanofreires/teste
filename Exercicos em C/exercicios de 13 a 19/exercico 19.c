#include <stdio.h>
#include <stdlib.h>

//definimos as variaveis globais
float volume,R,altura;

//definimos as constantes
#define PI 3.14159

//funcao principal
    int main (void){
    printf("digite valor do R da lata de oleo");
    //calcular o valor e o volume da lata de oleo
    scanf("%f",&R);

      printf("digite valor da altura lata de oleo");
    //calcular o valor e o volume da lata de oleo
    scanf("%f",&altura);


    volume=PI*(R*R)*altura;

    //mostra o resultado
    printf("o valor do volume da lata de oleo, eh igual %f\n",volume);



}
