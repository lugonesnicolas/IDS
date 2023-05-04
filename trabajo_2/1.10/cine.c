#include <stdio.h>
/* Realizar un programa que indique el valor de la entrada al cine según día de la semana. (Lunes, Martes Jueves precio normal), Miércoles 50% precio , viernes sábado y domingo doble precio. */

main()
{
    int precio = 1000;
    int dia = 0;

    printf("Indique el dia que va a ir al cine:\n0.Lunes\n1.Martes\n2.Miercoles\n3.Jueves\n4.Viernes\n5.Sabado\n6.Domingo\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 0:
        printf("El valor de entrada es: %d", precio);
        break; // Lunes
    case 1:
        printf("El valor de entrada es: %d", precio);
        break; // Martes
    case 2:
        precio = precio / 2;
        printf("El valor de entrada es: %d", precio);
        break; // Miercoles %50
    case 3:
        printf("El valor de entrada es: %d", precio);
        break; // Jueves
    case 4:
        precio = precio * 2;
        printf("El valor de entrada es: %d", precio);
        break; // Viernes x2
    case 5:
        precio = precio * 2;
        printf("El valor de entrada es: %d", precio);
        break; // Savado x2
    case 6:
        precio = precio * 2;
        printf("El valor de entrada es: %d", precio);
        break; // Domingo x2

    default:
        printf("Dia Incorrecto");
        break;
    }

    return (0);
}
