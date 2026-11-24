//Escreva um programa que leia três notas de um aluno, calcule a média e informe sua situação:
//média ≥ 60: Aprovado;
//média ≥ 40 e < 60: Exame Especial;
//média < 40: Reprovado.

//Exiba a média e a situação do aluno.

#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("Informe a segunda nota: ");
    scanf("%f", &n2);

    printf("Informe a terceira nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3)/ 3;

    printf("\n A media eh: %.2f", media);



}
