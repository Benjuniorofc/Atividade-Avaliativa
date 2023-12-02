#include<stdio.h>

int main()
{
    int A, B, C;
    printf ("informe o valor de A: ");
    scanf ("%i",&A);
    printf ("informe o valor de B: ");
    scanf ("%i",&B);
    printf ("informe o valor de C: ");
    scanf ("%i",&C);
    int soma = (A*A)+(B*B)+(C*C);
    int soma2 = soma;
    int quad = soma*soma2;
    printf ("o quadrado da soma do quadradro dos três números é %i",quad);
    return 0;
}