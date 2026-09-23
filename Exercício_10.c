#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int exercicio10(){

    int q, a1, n;
    float expoente, an;

    printf("\nDetermina a razão q da sua PG: ");
    scanf("%d", &q);

    printf("\nDetermine o valor do termo A1: ");
    scanf("%d", &a1);

    printf("\nQual a posição do termo que deseja saber? ");
    scanf("%d", &n);

    expoente = pow(q, n-1);
    an = a1 * expoente;

    printf("\n\nO valor do termo An é: %.2f", an);



}
