#include<stdio.h>

int main()
{
    float num1, num2;
    printf ("digite um número: ");
    scanf ("%f",&num1);
    printf ("digite outro número: ");
    scanf ("%f",&num2);
    float soma = num1+num2;
    float dife = num1-num2;
    float mult = num1*num2;
    float divi = num1/num2;
    printf ("o valor de sua soma é %f",soma);
    printf ("o valor de sua subtração é %f",dife);
    printf ("o valor de sua multiplicação é %f",mult);
    printf ("o valor de sua divisão é %f",divi);
    return 0;
}