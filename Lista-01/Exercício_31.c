#include <stdio.h>
#include <stdlib.h>


int exercicio31(){

    float conta, gorjeta, total;

    printf("Qual o valor da conta? ");
    scanf("%f", &conta);

    gorjeta = conta/10;

    total = gorjeta + conta;

    printf("\nO valor da gorjeta é = %.2f", gorjeta);
    printf("\nO total da conta é = %.2f", total);





}
