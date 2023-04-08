#include<stdio.h>

int main()
{
    int edad=0;//Definimos e inicializamos las variables
    int fecha_nacimiento=0;
    int fecha_hoy=2023;

    printf("Ingrese su edad \n");//Pedimos la edad
    scanf("%d",&edad);//Tipo de dato y lugar de la memoria

    fecha_nacimiento=fecha_hoy-edad;//Calculamos la edad
    printf("Nacio el año: %d /n", fecha_nacimiento);//Mostramos la edad


    return (0);
}
