#include <stdio.h>
#include <stdlib.h>


int exercicio01(){

    int a;
    printf("Digite um número inteiro: ");
    scanf("%d", &a);

    if (a%2==0){
        printf("O número %d é par", a);
    } else{
        printf("O número %d é impar", a);
        }
    return 0;
}
