/* Se tiene un sensor de temperatura, que registran 10 temperaturas distintas
cada uno. Esas temperaturas se ingresan por teclado. Se pide determinar e
informar por pantalla:
a) Temperatura promedio.
b) Máxima temperatura registrada.
c) Mínima temperatura registrada.
d) Cantidad de veces que la temperatura se encontró entre los 20 y los 45 ºC. */
#include <stdio.h>
#include <string.h>
#define datosCant 10.0

int main()
{
    float avg = 0.0;
    float temp = 0.0;
    float acum = 0.0;
    float max = -999; // Debe ser el valor mas pequeño de los que se pueda procesar
    float min = 0.0;  // Debe sel el valor mas Grande de los que se pueda procesar
    int cant2045 = 0;
    int i = 0;

    for (i = 0; i < datosCant; i++)
    {
        printf("Ingrese la temeratura en grados Centigrados\n");
        scanf("%f", &temp);
        acum = acum + temp;

        if (temp > max)
        {
            max = temp;
        }

        if (temp < min)
            min = temp;
    }

    avg = acum / datosCant;
    printf("El promedio es %f\n", avg);
    printf("El maximo es %f\n", max);
    printf("El minimo es %f\n", min);

    return (0);
}
