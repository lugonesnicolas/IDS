#include <stdio.h>
//Sume dos números y retorne el resultado.

int suma(int a, int b);

int main()
{
    int a=0;
    int b=0;
    int resultado=0;

    printf("Ingrese un numero\n");
    scanf("%d", &a);
    printf("Ingrese otro numero\n");
    scanf("%d", &b);

    resultado=suma(a, b);
    printf("El resultado de la suma es: %d\n", resultado);

    return (0);
}

int suma(int a, int b)
{
    return (a+b);
}

