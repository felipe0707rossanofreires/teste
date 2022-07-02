#include <stdio.h>
#include <stdlib.h>

//Definimos as variaveis Globais
int a, b;
int aux;

 //Funçao Principal
 int main (void){
     printf("leia:digite o valor de A ,valor \n");
     //digitar o valor de A e B
     // a <-- valor digitado
     scanf("%d", &a);

     printf("leia:digite o valor de B ,valor \n");
     // b <-- valor digitado
    scanf("%d", &b);
     // efetuar as trocas de valores
    aux = a;
    a = b;
    b = aux;
    printf("O valor de A: %d \n", a);
    printf("O valor de B: %d \n", b);
    system ("pause");
    return 0;
 }
