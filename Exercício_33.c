#include <stdio.h>
#include <stdlib.h>


int exercicio33(){

    int hora,minutos, minuto;


    printf("Digite a quantidade de horas no formato 00:00 : ");

    if (scanf("%d:%d" , &hora,&minutos )){
    minuto = (hora*60) + minutos;

    printf("O total de minutos é: %.2d", minuto);

    }








}
