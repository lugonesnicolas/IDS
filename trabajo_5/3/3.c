#include <stdio.h>
#define LARGO 10

int main()
{
    int lista[LARGO];

    for (int i = 0; i < LARGO; i++)
    {
        printf("Ingrese un numero de una sifra\n");
        scanf("%i", &lista[i]);
    }

    printf("La lista es: %s", &lista);


    return (0);
}
