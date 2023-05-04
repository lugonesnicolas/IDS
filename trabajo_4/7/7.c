#include <stdio.h>
#include <string.h>
/* El usuario indicara el tipo de pieza, peón, alfil, caballo, reina, rey, torre.
Se mostrara un mensaje indicando, que movimientos tiene permitidos, adelante, atras, diagonal, L, etc. */

int main()
{
    char pieza[20];

    printf("Indique la pieza\n");
    scanf("%s", pieza);

    if (strcmp(pieza, "peon") == 0)
    {
        printf("Puede moverse hacia adelante una casilla\n");
    }
    else if (strcmp(pieza, "alfil") == 0)
    {
        printf("Puede moverse en diagonal, en la dirección de las casillas del mismo color\n");
    }
    else if (strcmp(pieza, "caballo") == 0)
    {
        printf("Puede moverse en en L\n");
    }
    else if (strcmp(pieza, "reyna") == 0)
    {
        printf("Puede moverse en todas las direcciones, tanto ortogonales como diagonales \n");
    }
    else if (strcmp(pieza, "rey") == 0)
    {
        printf("Puede moverse en todas las direcciones, tanto ortogonales como diagonales, pero una sola casilla a la vez, mientras no quede en jaque.\n");
    }
    else if (strcmp(pieza, "torre") == 0)
    {
        printf("Puede moverse en direcciones ortogonales, es decir, por filas (horizontal) y columnas (vertical)\n");
    }
    else
    {
        printf("Ingresaste una pieza incorrecta");
    }

    return (0);
}
