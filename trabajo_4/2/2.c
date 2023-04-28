/* Escribir un programa donde ingresa una serie de valores enteros y luego informe la cantidad de valores pares e impares ingresados.
 El programa finaliza cuando se ingresa 0. */

#include <stdio.h>

int main()
{
    int numero = 0;
    int modulo = 0;
    int par = 0;
    int impar = 0;

    printf("Ingrese un numero");
    scanf("%d", &numero);

    while (numero != 0)
    {
        modulo = numero % 2;

        if (modulo == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }

        printf("Ingrese otro numero");
        scanf("%d", &numero);
    }

    printf("Los numeros son: %d pares, %d impares", par, impar);

    return (0);
}
