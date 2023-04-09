/*Dado la longitud de los lados de un triángulo me indique si es isósceles, equilátero, o escaleno.*/
#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    int c=0;

    printf("Igrese los lados de un triangulo\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a==b || b==c || a==c)
    {
        printf("El triangulo es isoceles\n");
    }else
    {
        printf("No es isoceles\n");
    }
}
