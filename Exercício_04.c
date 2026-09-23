#include <stdio.h>
#include <stdlib.h>


int exercicio04(){
    int num,a,b;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(num>0){
        a=num;
        printf("O número %d é positivo", a);
    } else{
        b=num;
        printf("O número %d é negativo", b);}


}
