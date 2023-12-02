#include<stdio.h>

int main()
{
    int num1, num2;
    printf ("digite um número: ");
    scanf ("%i",&num1);
    printf ("digite outro número: ");
    scanf ("%i",&num2);
    int soma = num1+num2;
    printf ("o valor de sua soma é %i",soma);
    return 0;
}