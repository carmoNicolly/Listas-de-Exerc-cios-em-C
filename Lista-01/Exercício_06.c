#include <stdio.h>
#include <stdlib.h>


int exercicio06(){

    int r,a1,termo, an;


    printf("informe a razão r da PA: ");
    scanf("%d", &r);

    printf("\ninforme o primeiro termo A1 da PA: ");
    scanf("%d", &a1);

    printf("\nQual termo você deseja saber o valor? ");
    scanf("%d", &termo);

    an = a1+((termo-1)*r);

    printf("\nO termo An da sua PA é = %d", an);


}
