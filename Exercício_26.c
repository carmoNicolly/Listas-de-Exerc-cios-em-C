#include <stdio.h>
#include <stdlib.h>

int exercicio26(){

    float valorHora, qtdAulas, inssDesc;

    printf("\nQual o valor de hora por aula? ");
    scanf("%f", &valorHora);


    printf("\nQuantas aulas você dá por mês? ");
    scanf("%f", &qtdAulas);

    printf("\nQual o percentual de desconto do INSS? ");
    scanf("%f", &inssDesc);

    printf("\n\nO salário líquido é: %.f", valorHora*qtdAulas*((100-inssDesc)/100));





}
