#include <stdio.h>

int main()
{
    int x=1;
    int resultado=0;

    printf("Vamos a calcular del 0 al 25 si los numeros son pares\n");

    for(x;x<=25;x++)
    {
        resultado=x%2;
        if(resultado!=0)
        {
            printf("%d es impar\n",x);
        }
    }
    
    return (0);
}