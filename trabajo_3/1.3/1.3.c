/* Le sume 5 e indique el resultado , a un número que el usuario
ingresará por teclado, lo hará hasta que el número ingresado sea 79. */
#include <stdio.h>

int main()
{
    int numero=0;
    int resultado=0;

    printf("Ingrese un numero\n");
    scanf("%d", &numero);

    while (numero!=79)
    {
        printf("Ingrese otro numero\n");
        scanf("%d", &numero);
    }
    
    return (0);
}