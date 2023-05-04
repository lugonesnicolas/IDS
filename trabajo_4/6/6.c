#include <stdio.h>
/* Escribir un programa que calcule el promedio de 10 valores numéricos
ingresados por teclado. */

int main()
{
    int contador = 0;
    int promedio = 0;
    int numero = 0;

    for (contador = 0; contador < 10; contador++)
    {
        printf("Ingrese un numero\n");
        scanf("%d", &numero);
        promedio = promedio + numero;
    }
    promedio = promedio / contador;
    printf("Promedio:%d\n", promedio);

    return (0);
}
