#include<stdio.h>

int main()
{
    int fecha_nacimiento=0;//Definimos e inicializamos las variables
    int fecha_actual=2023;
    int edad=0;

    printf("Ingrese su fecha de nacimiento \n");//Pedimos la fecha de nacimiento
    scanf("%d",&fecha_nacimiento);
    edad=fecha_actual-fecha_nacimiento;//Calculamos la edad

    printf("Usted tiene %d años \n", edad);//Mostramos la edad


    return (0);
}
