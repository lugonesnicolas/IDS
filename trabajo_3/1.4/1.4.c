#include <stdio.h>

int main()
{
    char nombre[20];
    int edad = 0;
    int telefono[15];
    int par = 0;

    printf("Ingrese su nombre\n");
    scanf("%s", nombre);

    printf("Ingrese su edad\n");
    scanf("%d", &edad);
    printf("Ingrese su numero de telefono\n");
    scanf("%s", telefono);
    par = edad % 2;

    if (par == 0)
    {
        printf("Su edad es un numero par\n");
    }
    else
    {
        printf("Su edad es una numero impar\n");
    }

    printf("Gracias %s", nombre);

    return (0);
}
