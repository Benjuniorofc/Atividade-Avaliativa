#include<stdio.h>

int main()
{
    int F;
    printf ("informe o valor da temperatura em °F: ");
    scanf ("%i",&F);
    int C = (F-32)*5/9;
    printf ("o valor da temperatura em Graus Celcius é %i",C);
    return 0;
}