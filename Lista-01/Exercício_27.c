#include <stdio.h>
#include <stdlib.h>

int exercicio27(){

    float fahreinheit, celsius;

    printf("Informe a temperatura em Fahreinheit: ");
    scanf("%f", &fahreinheit);

    celsius = (5*fahreinheit - 160)/9;

    printf("A temperatura em graus Celsius é: %.2f", celsius);


}
