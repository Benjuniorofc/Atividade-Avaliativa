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
    printf ("a soma do quadradro dos três números é %i",soma);
    return 0;
}