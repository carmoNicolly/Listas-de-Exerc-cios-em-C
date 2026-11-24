#include <stdio.h>
#include <stdlib.h>


//Leia a quantidade de vendas realizadas e, em seguida, o valor de cada venda.
//Ao final, exiba:
//• o total vendido;
//• a média das vendas;
//• a quantidade de vendas acima de R$ 500,00;
//• o maior e o menor valor de venda.
//Não utilize vetores.

int main(){

    float qtdVendas, valorVenda, total = 0, vendaAlta = 0, maior = 0, menor = 0, n = 0, media = 0;

    printf("Informe a quantidade de vendas realizadas: ");
    scanf("%f", &qtdVendas);

    while(n < qtdVendas){
        printf("\nValor da venda: ");
        scanf("%f", &valorVenda);
        total = total + valorVenda;

        if(valorVenda > 500){
            vendaAlta++;
        }
        if(n == 0){
            maior = valorVenda;
            menor = valorVenda;
        } else {
            if(valorVenda > maior){
                maior = valorVenda;
            }
            if(valorVenda < menor){
                menor = valorVenda;
            }
        }

        n++;
    }

    if(qtdVendas > 0){
        media = total / qtdVendas;
    }

    printf("\nO total vendido foi: %.2f", total);
    printf("\nA media das vendas eh %.2f", media);
    printf("\nA quantidade de vendas acima de 500 foi: %.0f", vendaAlta);
    printf("\nA maior venda foi %.2f", maior);
    printf("\nA menor venda foi %.2f", menor);

    return 0;
}
