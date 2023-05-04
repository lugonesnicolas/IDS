#include <stdio.h>
/* Realizar un programa que calcule la asistencia de un estudiante, dado su estado ‘P’ ,’ A’,’ T’ , Presente no acumulara inasistencia, A acumulara 1 inasistencia, Tarde acumulara ½ inasistencia. */

int main()
{
    char estado = ' ';
    float asistencia = 0;

    printf("Ingrese el estado de la asistencia\n");
    scanf("%c", &estado);

    if (estado == 'p' || estado == 'P')
    {
        printf("Presente");
    }
    else if (estado == 't' || estado == 'T')
    {
        printf("Tarde");
        asistencia = asistencia + 0.5;
    }
    else if (estado == 'a' || estado == 'A')
    {
        printf("Ausente");
        asistencia = asistencia + 1;
    }
    else
    {
        printf("Estado erroneo");
    }

    printf("La asistencia del estudiante es: %f", asistencia);
    return (0);
}
