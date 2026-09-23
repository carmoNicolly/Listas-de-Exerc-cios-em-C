#include <stdio.h>
#include <stdlib.h>


int exercicio28(){

    float diametro, altura, volume;

    printf("Qual a altura da lata? ");
    scanf("%f", &altura);

    printf("\nQual o diâmetro da lata? ");
    scanf("%f", &diametro);

    volume = 3.14 *(diametro/2) * (diametro/2) * altura;

    printf("\n\nO volume da lata é %.2f", volume);





}
