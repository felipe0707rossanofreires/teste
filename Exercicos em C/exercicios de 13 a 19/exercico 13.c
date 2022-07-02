#include <stdio.h>
#include <stdlib.h>

//definimos as variaveis Globais
int raio;
float area;

//definimos as Constantes
#define PI 3.14159265358979323846

//funçao principal
int main (void){

printf("informe o raio do circulo:");
//efetua a leitura do raio
scanf("%d", &raio);
//calcula a area
area=PI*raio*raio;
//mostra o resultado
printf ("a area do circulo de raio %d eh igual a: %f /n/n",raio, area);

system ("PAUSE");
return 0;
}
