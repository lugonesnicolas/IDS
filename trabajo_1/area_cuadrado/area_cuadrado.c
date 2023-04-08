#include<stdio.h>

int main()
{
    int lado=0;//Definimos e inicializamos las variables
    int area=0;

    printf("Ingrese un lado del cuadrado \n");//Pedimo el dato
    scanf("%d",&lado);//Formato del dato
    area=lado*lado;//Calculamos

    printf("El area del cuadrado es:%d \n", area);//Mostramos el resultado


    return (0);
}
