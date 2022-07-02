#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//definimos as variaveis globais
float a,b,c;
float delta;
//definimos as constantes
/*delta=b²-4ac*/

//funcao principal
int main (void) {

//efetue a leitura de a,b,c
printf("informe o valor de a: ");
scanf ("%f", &a);
printf ("informe o valor de b: ");
scanf("%f", &b);
printf("informe o valor de c: ");
scanf ("%f", &c);
//calcula a formula
delta= (b*b)-4*a*c;

//mostra o resultado
printf("o resultado eh,%f ",delta);


return 0;
}
