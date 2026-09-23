#include <stdlib.h>
#include <stdio.h>

int exercicio12(){

    char placa[4], algarismoDezenas;

    printf("Informe os 4 algarismos da placa: ");

    scanf("%c", &placa[0]);
    scanf("%c", &placa[1]);
    scanf("%c", &placa[2]);
    scanf("%c", &placa[3]);


    algarismoDezenas = placa[2];

    printf("\nO algarismo correspondente à casa das dezenas é: %c", algarismoDezenas);




}

