/* Un usuario ingresara 1 caracter, y luego otro caracter .
Se ingresaran caracteres hasta que ambos sean '0' y  '0'.
Cuando el primer y el segundo caracter sean respectivamente 'a' y 'i'   ,   'e' y 'i'     ,     'o' y 'i'   Se debera mostrar el mensaje "Diptongo detectado".
Antes de finalizar el programa se debera imprimir cuantos diptongos se detectaron.
(solo seran consideradas soluciones de software usando el lenguaje y las herramientas vistas en clase)
Subir un archivo [SIN COMPRIMIR] , que sea un programa fuente, titulado NombreApellido-DNI.c */
#include <stdio.h>
#include <stdint.h>

int main()
{
    char a;
    char b;
    int diptongo = 0;

    printf("Ingrese un caracter: ");
    scanf("%c", &a);
    fflush(stdin);
    printf("Ingrese otro caracter: ");
    scanf("%c", &b);
    fflush(stdin);

    while (a != '0' && b != '0')
    {
        if (a == 'a' || a == 'e' || a == 'o' && b == 'i')
        {
            diptongo++;
        }

        printf("\nIngrese un caracter: ");
        scanf("%c", &a);
        fflush(stdin);
        printf("Ingrese otro caracter: ");
        scanf("%c", &b);
        fflush(stdin);
    }

    printf("La cantidad de diptongos son: %d\n", diptongo);

    return (0);
}