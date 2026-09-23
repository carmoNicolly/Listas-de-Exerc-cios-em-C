#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int exercicio24(){

    float a1, p, n, q, exp1, exp2;

    printf("Informe o termo A1 da PG: ");
    scanf("%f", &a1);

    printf("Informe a razão q da PG: ");
    scanf("%f", &q);

    printf("Informe o número N de termos da PG: ");
    scanf("%f", &n);

    exp1 = pow(a1,n);
    exp2 = pow(q, (n*(n-1)/2));
    p = exp1 * exp2;

    printf("O produto P é = %.2f", p);




}
