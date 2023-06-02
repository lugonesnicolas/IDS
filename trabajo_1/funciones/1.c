#include <stdio.h>

int sumar(int numero1, int numero2);

int main()
{
    int numero1=0;
    int numero2=0;
    int resultado=0;

    printf("Ingrese el primer numero\n");
    scanf("%d",&numero1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&numero2);
    resultado=sumar(numero1, numero2);
    printf("La suma es %d", resultado);

    return (0);
}

int sumar(int numero1, int numero2)
{
    return numero1+numero2;
}
