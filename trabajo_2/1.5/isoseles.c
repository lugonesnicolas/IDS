#include <stdio.h>

int main()
{
    int a = 0; // Inicializamos las variables
    int b = 0;
    int c = 0;

    printf("Igrese los lados de un triangulo\n"); // Ingresamos los lados del triangulo
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // Si A es igual a B
    if (a == b)
    {
        if (b == c) // Si B==C, entonces A==B==C Equilatero
        {
            printf("Equilatero");
        }
        else // Si B!=C, entonces A==B!=C es distinto entonces es Isoceles
        {
            printf("Isoseles");
        }
    }
    // Si llegamos aca entonces A!= B
    else if (a == c) // Si A==C, entonces A==C!=B entonces es Isoceles
    {
        printf("Isoseles");
    }
    // Si llegamos aca entonces A!=B y A!=C
    else if (b == c) // Si B==C, tenemos que B==C!=A entonces es Isoceles
    {
        printf("Isoseles");
    }
    else // A!=B A!=C B!=C, tenemos que todos los lados son distintos entonces es Escaleno
    {
        printf("Escaleno");
    }

    return (0);
}
