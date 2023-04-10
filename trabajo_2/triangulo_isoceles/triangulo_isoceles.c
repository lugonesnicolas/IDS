/*Dado la longitud de los lados de un triángulo me indique si es isósceles, equilátero, o escaleno.*/
#include <stdio.h>

int main()
{
    int a=0;//Inicializamos las variables
    int b=0;
    int c=0;

    printf("Igrese los lados de un triangulo\n");//Ingresamos los lados del triangulo
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a!=b && b!=c && a!=c)//Preguntamos si todos sus lados son distintos
    {
        printf("El triangulo es Escaleno");//Si es verdadero es Escaleno
    }
    else if(a==b && b==c && a==c)//Preguntamos si sus lados son iguales
    {
        printf("El triangulo es Equilatero");//Si es verdadero es Equilatero
    }
    else
    {
        printf("El triangulo es Isoceles");//Si no es Isoceles
    }

    return (0);
}
