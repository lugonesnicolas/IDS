#include <stdio.h>

int main()
{
    int peso = 0;
    float altura = 0;
    float imc = 0;

    printf("Ingrese su peso en kg\n");
    scanf("%d", &peso);
    printf("Ingrese su altura en metros dividiendo el decimal por un '.'\n");
    scanf("%f", &altura);

    imc = peso / altura;

    printf("Su IMC es:%f\n", imc);

    if (imc < 18.5)
    {
        printf("Peso inferior de lo normal\n");
    }
    else if (imc <= 24.9)
    {
        printf("Peso normal\n");
    }
    else if (imc <= 29.9)
    {
        printf("Peso superior a lo normal\n");
    }
    else
    {
        printf("Obesidad\n");
    }

    return (0);
}
