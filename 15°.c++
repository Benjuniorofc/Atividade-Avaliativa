#include <stdio.h>

int main() {
    int quilometros, litros;
    printf ("quantos quilômetros você andou:");
    scanf ("%i", &quilometros);
    printf ("quantos litros de gasolina foram usados: ");
    scanf ("%i", &litros);
    int consumo = quilometros / litros;
    printf("seu consumo foi de %i", consumo);
    return 0;
}