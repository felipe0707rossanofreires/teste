#include <stdio.h>
#include <stdlib.h>


int main (void){

    char nome [20];
    char sexo [10];
    printf("digite o seu nome :");
    scanf("%s",&nome);
   printf("digite o seu sexo:");
   scanf("%d", &sexo);
    printf ("%s %d", nome, sexo);
    return 0;
    system("pause");
}
