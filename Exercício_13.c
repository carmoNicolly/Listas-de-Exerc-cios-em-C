#include <stdlib.h>
#include <stdio.h>

int exercicio13(){
    char placa[4], algarismoCentenas;

    printf("Insira os 4 algarismos da placa: ");

    scanf("%c", &placa[0]);
    scanf("%c", &placa[1]);
    scanf("%c", &placa[2]);
    scanf("%c", &placa[3]);

    algarismoCentenas = placa[1];

    printf("\nO algarismo na casa das centenas é: %c", algarismoCentenas);



}
