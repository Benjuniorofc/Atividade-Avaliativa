#include<stdio.h>

int main()
{
    int C;
    printf ("informe o valor da temperatura em °C: ");
    scanf ("%i",&C);
    int F = (9*C+160)/5;
    printf ("o valor da temperatura em Fahreinheit é %i",F);
    return 0;
}