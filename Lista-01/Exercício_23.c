#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int exercicio23(){

    float a, c, b, b2;

    printf("Informe o termo A da PG: ");
    scanf("%f", &a);

    printf("Informe o termo C da PA: ");
    scanf("%f", &c);

    b2 = a*c;

    b = pow(b2, 0.5);

    printf("\nO termo B é = %.2f", b);


}
