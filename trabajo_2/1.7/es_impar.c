#include <stdio.h>

int main()
{
    int a=0;//Inicializamos las variables
    int b=0;

    printf("Ingrese un numero entero\n");//Pedimos el dato
    scanf("%d",&a);
    b=a%2;//Calculamos su modulo

    if(b!=0)
    {
        printf("El numero es impar\n");//Mostramo que es impar
    }
    else
    {
        printf("El numero es par\n");//Mostramos que es par
    }

    return (0);
}
