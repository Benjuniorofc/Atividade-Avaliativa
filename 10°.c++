#include<stdio.h>

int main()
{
    int B, b, h;
    printf ("informe o valor da base maior: ");
    scanf ("%i",&B);
    printf ("informe o valor da base menor: ");
    scanf ("%i",&b);
    printf("informe o valor da altura: ");
    scanf ("%i",&h);
    int area = (B+b)*h/2;
    printf ("o valor de sua área é %i",area);
    return 0;
}