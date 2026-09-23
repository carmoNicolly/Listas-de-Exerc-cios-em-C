#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int exercicio07(){
    int q, a1, termo;
    float an, expoente;

    printf("informe a razão q da PG: ");
    scanf("%d", &q);

    printf("\ninforme o primeiro termo A1 da PG: ");
    scanf("%d", &a1);

    printf("\nQual termo você deseja saber o valor? ");
    scanf("%d", &termo);

    expoente = pow(q, termo-1);
    an = a1 * expoente;

    printf("\nO termo An da sua PG é = %.2f", an);




}
