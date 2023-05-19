#include <stdio.h>

int main()
{
    char nombre[20];

    printf("Ingrese un nombre\n");
    scanf("%s", nombre);
/*    printf("El nombre es: %s", nombre);*/

    for(int i = 0; nombre[i] != '\0'; i++)
    {
        printf("%c", nombre[i]);
    }

    printf("\n");

    printf("Ingrese un nombre\n");
    scanf("%s", nombre);
/*    printf("El nombre es: %s", nombre);*/

    for(int i = 0; nombre[i] != '\0'; i++)
    {
        printf("%c", nombre[i]);
    }



    return (0);
}
