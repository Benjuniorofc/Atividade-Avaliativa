#include<stdio.h>

int main()
{
    float raio;
    printf ("informe o valor do raio: ");
    scanf ("%f",&raio);
    float area = 3.14159*(raio*raio);
    float comp = 2*3.14159*raio;
    printf ("o valor de sua área é %f",area);
    printf (" e o valor de seu comprimento é %f",comp);
    return 0;
}