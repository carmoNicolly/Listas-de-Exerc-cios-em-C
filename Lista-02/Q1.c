#include <stdio.h>
#include <stdlib.h>


//Escreva um programa que leia o valor de um produto e a quantidade comprada. Calcule e exiba o valor
//total da compra.


int main(){

    float valor, qtd, total;

    printf("Qual o valor do produto? ");
    scanf("%f", &valor);

    printf("Quantas unidades vc comprou? ");
    scanf("%f", &qtd);

    total = valor*qtd;

    printf("O valor total da compra foi: %.2f", total);





}
