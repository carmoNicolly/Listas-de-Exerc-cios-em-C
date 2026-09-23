#include <stdlib.h>
#include <stdio.h>

int exercicio11(){

    char algarismo[4], algarismo4;
    int placa;

    printf("Informe os 4 algarismos da placa: ");

    scanf("%c", &algarismo[0]);
    scanf("%c", &algarismo[1]);
    scanf("%c", &algarismo[2]);
    scanf("%c", &algarismo[3]);

    algarismo4 = algarismo[3];

    printf("\nO algarismo correspondente à casa das unidades é: %c", algarismo4 );




}
