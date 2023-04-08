#include <stdio.h>

int main()
{
    int bandeja=100;//Definimos e inicializamos las variables
    int impresiones=0;


    printf("Ingrese la cantidad de impresiones que desea hacer.\n");//Pedimos la cantidad de impresiones
    scanf("%d", &impresiones);
    bandeja=bandeja-impresiones;//Calculamos cuantas hojas quedan en la bandeja

    printf("Quedan %d hojas en la bandeja.\n", bandeja);//Mostramos el resultado

    return (0);
}
