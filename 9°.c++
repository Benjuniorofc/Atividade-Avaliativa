#include<stdio.h>

int main()
{
    float raio;
    printf ("informe o valor do raio: ");
    scanf ("%f",&raio);
    float vol = 3*(raio*raio*raio)/4*3;
    printf ("o valor de seu volume é %f",vol);
    return 0;
}