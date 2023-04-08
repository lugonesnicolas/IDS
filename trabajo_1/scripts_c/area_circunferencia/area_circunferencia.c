#include<stdio.h>
#include<math.h>//Introducimos la libreria math

#define PI 3.141592//Definimos la constante

int main()
{
    float radio=0;//Definimos e inicializamos las variables
    float area=0;

    printf("Ingrese el radio de la circunferencia\n");//Pedimo el radio
    scanf("%f",&radio);//Formato del dato
    area=PI*(radio*radio);//Calculamos el area

    printf("El area de la circunferencia es:%f \n", area);//Mostramos el resultado


    return (0);
}

