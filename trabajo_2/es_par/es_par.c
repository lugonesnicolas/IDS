#include <stdio.h>

int main()
{
    int a=0;//Inicializamos las variables
    int b=0;

    printf("Ingrese un numero entero\n");//Pedimos el dato
    scanf("%d",&a);
    b=a%2;//Calculamos su modulo

    if(b==0)//Si su modulo es igual a 0 es par
    {
        printf("Es par");
    }
    else
    {
        printf("No es par");//Sino no es par
    }

    return (0);
}
