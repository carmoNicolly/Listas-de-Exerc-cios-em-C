#include <stdio.h>
#include <stdlib.h>


int exercicio25(){

    float preco;

    printf("Informe o preço do produto: ");
    scanf("%f", &preco);

    printf("\nCom nove por cento de desconto o preço é: %.2f", (preco*81)/100);
    printf("\nO valor de desconto foi de %.2f", (preco*9)/100);



}
