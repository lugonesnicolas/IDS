#include <stdio.h>
#include <stdint.h>

int main()
{
    int carta_uno = 1;
    int carta_dos = 2;
    int carta_tres = 3;
    int carta_uno_palo = 0;
    int carta_dos_palo = 0;
    int carta_tres_palo = 0;

    printf("Ingrese el numero de la primer carta\n");
    scanf("%d", &carta_uno);
    printf("Ingrese 1.Espada\n2.Oro\n3.Copa\n4.Basto");
    scanf("%d", &carta_uno_palo);
    fflush(stdin);
    printf("Ingrese el numero de la segunda carta\n");
    scanf("%d", carta_dos);
    printf("Ingrese 1.Espada\n2.Oro\n3.Copa\n4.Basto");
    scanf("%d", &carta_dos_palo);
    fflush(stdin);
    printf("Ingrese el numero de la tercer carta\n");
    scanf("%d", carta_tres);
    printf("Ingrese 1.Espada\n2.Oro\n3.Copa\n4.Basto");
    scanf("%d", &carta_tres_palo);
    fflush(stdin);

    if (carta_uno_palo == carta_dos_palo)
    {
        if (carta_dos_palo == carta_tres_palo)
        {
            printf("Flor");
        }
        else
        {
            printf("Envido");
        }
    }
    else if (carta_dos_palo == carta_tres_palo)
    {
        printf("Envido");
    }
    else
    {
        printf("No tiene cartas para el envido");
    }

    return (0);
}