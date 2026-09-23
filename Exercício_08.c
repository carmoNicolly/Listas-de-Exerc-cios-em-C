#include <stdio.h>
#include <stdlib.h>


int exercicio08(){

    int r, n, k, ak, an;

    printf("Determine a razão da PA: ");
    scanf("%d", &r);

    printf("\nDetermine qual a posição do termo n que deseja saber: ");
    scanf("%d", &n);

    printf("\nDetermine a posição do termo k: ");
    scanf("%d", &k);

    printf("\nInforme o valor de Ak: ");
    scanf("%d", &ak);

    an = ak+((n-k)*r);

    printf("\n\n\O valor do termo An é: %d", an);

}
