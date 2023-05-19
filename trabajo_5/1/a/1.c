#include <stdio.h>

void positivo(int a)
{
    if(a>0)
    {
        printf("Es positivo");
    }
    else if(a<0)
    {
        printf("Es negativo");
    }
    else
    {
        printf("Es 0");
    }
}


int main()
{
    int numero=0;
    printf("Ingrese un numero\n");
    scanf("%d", &numero);

    positivo(numero);

    return (0);
}
