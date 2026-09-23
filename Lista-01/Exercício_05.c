#include <stdio.h>
#include <stdlib.h>


int exercicio05(){

    int num, p ,i;

    printf("Informe um número inteiro: ");
    scanf("%d", &num);

    if(num%2==0){
        p=num;
        printf("O número %d é par e não foi gerado valor ímpar", p);
    } else{
        i=num;
        printf("O número %d é ímpar e não foi gerado valor par", i);}


}

