#include <stdio.h>
#include <stdlib.h>

int main (void){

    float celcius, faren;

    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &celcius);

    faren = ((9 * celcius +160)/5);

    printf("A temperatura em faren eh %f", faren);

    return 0;
}
