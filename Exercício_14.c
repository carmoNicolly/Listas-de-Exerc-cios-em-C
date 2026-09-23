#include <stdio.h>
#include <stdlib.h>

int exercicio14(){

    char placa[4], algarismoMilhar;

    printf("Informe os 4 algarismos da placa: ");

    scanf("%c", &placa[0]);
    scanf("%c", &placa[1]);
    scanf("%c", &placa[2]);
    scanf("%c", &placa[3]);

    algarismoMilhar = placa[0];

    printf("\nO algarismo da unidade de milhar é: %c ", algarismoMilhar);




}
