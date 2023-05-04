#include <stdio.h>
/* Un usuario ingresara día y mes de nacimiento, el programa informará, su signo del zodiaco. */

int main()
{
    int dia = 0;
    int mes = 0;

    printf("Ingrese el dia y el mes de su nacimiento\n");
    scanf("%d", &dia);
    scanf("%d", &mes);

    if (dia >= 21 && mes == 3 || dia <= 19 && mes == 4)
    {
        printf("Signo Aries\n");
    }
    else if (dia >= 20 && mes == 4 || dia <= 20 && mes == 5)
    {
        printf("Signo Tauro\n");
    }
    else if (dia >= 21 && mes == 5 || dia <= 20 && mes == 6)
    {
        printf("Signo Geminis\n");
    }
    else if (dia >= 21 && mes == 6 || dia <= 22 && mes == 7)
    {
        printf("Signo Cancer\n");
    }
    else if (dia >= 23 && mes == 7 || dia <= 22 && mes == 8)
    {
        printf("Signo Leo\n");
    }
    else if (dia >= 23 && mes == 8 || dia <= 22 && mes == 9)
    {
        printf("Signo Virgo\n");
    }
    else if (dia >= 23 && mes == 9 || dia <= 22 && mes == 10)
    {
        printf("Signo Libra\n");
    }
    else if (dia >= 23 && mes == 10 || dia <= 21 && mes == 11)
    {
        printf("Signo Escorpio\n");
    }
    else if (dia >= 22 && mes == 11 || dia <= 21 && mes == 12)
    {
        printf("Signo Sagitario\n");
    }
    else if (dia >= 22 && mes == 12 || dia <= 19 && mes == 1)
    {
        printf("Signo Capricornio\n");
    }
    else if (dia >= 20 && mes == 1 || dia <= 18 && mes == 2)
    {
        printf("Signo Acuario\n");
    }
    else if (dia >= 19 && mes == 2 || dia <= 20 && mes == 3)
    {
        printf("Signo Piscis\n");
    }
    else
    {
        printf("Sus datos no coinciden con un signo zodiacal");
    }
    /*    printf("Su fecha de nacimiento es %d/%d\n", dia, mes);*/

    return (0);
}
