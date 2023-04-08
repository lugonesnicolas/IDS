/*Dado dos números A y B, me indique cual es el mayor.*/
#include <stdio.h>


int main()
{
    int a=0;//Inicializamos las variables y las declaramos
    int b=0;

    printf("Ingrese 2 numeros distintos con el teclado\n");//Pedimos los datos
    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b)//Comparamos y devolvemos el mayor
    {
        printf("A es mayor que B\n");
    }else
    {
        printf("B es mayor que A");
    }

    return (0);
}
