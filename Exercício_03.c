#include <stdio.h>
#include <stdlib.h>


int exercicio03(){

    char nome[10];
    char sexo;

    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("\n Informe seu sexo: (F para feminino ou M para masculino) \n");
    scanf(" %c",&sexo);

    if (sexo == 'F' || sexo == 'f'){
        printf("\n Ilma Sra.");
    } else{
        printf("\n Ilmo Sr.");}


    printf("\n Nome: %s", nome);


}
