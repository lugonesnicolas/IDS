/* Escriba un programa donde ingrese una serie de números reales. Cuando
encuentra un valor mayor que 283, deja de leer e informa cuantos elementos
tiene la serie. */
#include <stdio.h>

int main()
{
    int numero = 0;
    int contador = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    while (numero <= 283)
    {
        contador++;
        printf("Ingrese otro numero: ");
        scanf("%d", &numero);
    }

    printf("Los numero ingresados son %d", contador);

    return (0);
}