#include <stdio.h>
#include <stdlib.h>


int exercicio02(){
    int a;

    printf("Insira um número de 1 a 9: ");
    scanf("%d", &a);

    if(a>=1 && a<=9){
        printf("O valor está na faixa permitida");
    } else{
        printf("O valor está fora da faixa permitida");
        printf("Tente novamente:");
        scanf("%d", &a);}
        while (a<1 || a>9){
            printf("O valor está fora da faixa permitida");
            printf("Tente novamente:");
            scanf("%d", &a);
        }
     if(a>=1 && a<=9){
        printf("O valor está na faixa permitida");
    }

}
