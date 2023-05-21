#include <stdio.h>

void positivo(int a)
{
    if(a>0)
    {
        printf("Es positivo\n");
    }
    else if(a<0)
    {
        printf("Es negativo\n");
    }
    else
    {
        printf("Es 0\n");
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
