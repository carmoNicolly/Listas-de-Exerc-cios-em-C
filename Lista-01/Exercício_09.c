#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int exercicio09(){
    int q, ak, k, n, expoente;
    float an;

    printf("\nDetermine a razão q da sua PG: ");
    scanf("%d", &q);

    printf("\nInforme o valor do termo Ak: ");
    scanf("%d", &ak);

    printf("\nDetermine em que posição K está o termo Ak: ");
    scanf("%d", &k);

    printf("\nInforme em que posição n está o termo que deseja saber: ");
    scanf("%d",&n);

    expoente = pow(q, n-k);
    an = ak * expoente;

    printf("\n\nO valor do termo An é: %.2f", an);


}
