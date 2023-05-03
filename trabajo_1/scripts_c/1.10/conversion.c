#include <stdio.h>

int main()
{
    float conversion=25.4;//Milimetros de una pulgada
    int pulgada=0;
    int milimetro=0;

    printf("Ingrese cuantas pulgadas quiere pasar a mm.\n");//Pedimos el dato
    scanf("%d", &pulgada);
    milimetro=pulgada*25.4;

    printf("La medida en mm es:%d", milimetro);//Mostramos el resultado

    return(0);
}
