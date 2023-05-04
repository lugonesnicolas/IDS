#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[20];
    int edad = 0;
    int telefono[15];
    int par = 0;
    char fin[] = "fin";
    int x = 0;

    printf("Ingrese su nombre\n");
    scanf("%s", nombre);
    printf("Ingrese su edad\n");
    scanf("%d", &edad);
    printf("Ingrese su numero de telefono\n");
    scanf("%s", telefono);
    x = strcmp(nombre, fin);

    while (x != 0)
    {
        printf("Ingrese su nombre\n");
        scanf("%s", nombre);
        x = strcmp(nombre, fin);
    }

    return (0);
}
