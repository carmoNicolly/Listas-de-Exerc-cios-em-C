#include <stdio.h>
#include <stdlib.h>

int exercicio35(){

    float salMinimo, salRecebido, calculo;

    printf("Qual o valor do salário mínimo atual? ");
    scanf("%f", &salMinimo);

    printf("\nQual o valor do seu salário? ");
    scanf("%f", &salRecebido);

    calculo = salRecebido / salMinimo;

    printf("\nVocê recebe %.1f salários", calculo);




}
