#include<stdio.h>

int main()
{
    int base=0;//Definimos e inicializamos las variables
    int altura=0;
    int area=0;

    printf("Ingrese la base del rectangulo \n");//Pedimo la base
    scanf("%d",&base);//Formato del dato
    printf("Ingrese la altura del rectangulo \n");//Pedimo la altura
    scanf("%d",&altura);
    area=base*altura;//Calculamos el area

    printf("El area del rectangulo es:%d \n", area);//Mostramos el resultado


    return (0);
}
