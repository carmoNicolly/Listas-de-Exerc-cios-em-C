#include <stdio.h>
#include <stdlib.h>

int exercicio37(){

    float salMin, qtdKw, precoKw, valorPago, valorDesconto;

    printf("Qual o valor do salário mínimo? ");
    scanf("%f", &salMin);

    printf("\n Quantos KW sua residência consome? ");
    scanf("%f", &qtdKw);

    precoKw = ((1.0/7.0)*salMin)/100;

    valorPago = precoKw * qtdKw;

    valorDesconto = 0.9 * valorPago;

    printf("\nO valor de cada kw é %.2f", precoKw);
    printf("\nO valor a ser pago é %.2f reais", valorPago);
    printf("\nCom 10 por cento de desconto o valor a ser pago é %.2f reais", valorDesconto);



}
