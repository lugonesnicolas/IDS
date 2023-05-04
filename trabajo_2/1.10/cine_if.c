#include <stdio.h>

int main()
{
    int precio = 1000;
    int dia = 0;

    printf("Indique el dia que va a ir al cine:\n0.Lunes\n1.Martes\n2.Miercoles\n3.Jueves\n4.Viernes\n5.Sabado\n6.Domingo\n");
    scanf("%d", &dia);

    if (dia >= 0 && dia <= 6)
    {
        if (dia == 4 || dia == 5 || dia == 6)
        {
            precio = precio * 2;
        }
        else if (dia == 2)
        {
            precio = precio / 2;
        }
    }
    else
    {
        printf("Error al cargar el dia");
    }
    printf("El valor de la entrada es: %d", precio);

    return (0);
}
