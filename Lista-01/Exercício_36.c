#include <stdio.h>
#include <stdlib.h>

int exercicio36(){

    float tempoHoras, velMedia, distancia, litros;

    printf("Informe o tempo de duração da viagem em horas: ");
    scanf("%f", &tempoHoras);

    printf("\nInforme a velocidade média durante a viagem: ");
    scanf("%f", &velMedia);

    distancia = velMedia * tempoHoras;

    litros = distancia/12;

    printf("\nVocê gastou %.2f litros de gasolina", litros);



}
