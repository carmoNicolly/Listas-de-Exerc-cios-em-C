//Leia um número inteiro positivo N. Para cada número entre 1 e N, informe se ele é par ou ímpar.
//Ao final, exiba:
//• a quantidade de números pares;
//• a quantidade de números ímpares;
//• a soma dos números pares.


#include <stdio.h>
#include <stdlib.h>


int main(){

    int n, par, impar, soma, i;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for(i =1; i<=n; i++){
        if(i%2==0){
            par ++;
            soma = soma + i;
        }
        else{
            impar ++;
        }
    }

    printf("\nA quantidade de numeros pares foi %d", par);
    printf("\nA quantidade de numeros impares foi %d", impar);
    printf("\nA soma dos pares foi = %d", soma);







}
