#include <stdio.h>
#include <stdlib.h>


int exercicio34(){

    float deposito, juros, rendimento, total;

    printf("Qual o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros: ");
    scanf("%f", &juros);

    rendimento = deposito * (juros / 100);

    total = deposito + rendimento;

    printf("Rendimento: R$ %.2f: ", rendimento);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}


