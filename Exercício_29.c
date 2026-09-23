#include <stdio.h>
#include <stdlib.h>


int exercicio29(){

    int a,b, a2;

    printf("Qual o valor da variável A? ");
    scanf("%d", &a);

    printf("Qual o valor da variável B? ");
    scanf("%d", &b);


    a2 = b;
    b = a;
    a = a2;

    printf("\nA: %d \n\nB: %d ", a, b);





}
