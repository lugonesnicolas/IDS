/*
Programa que sume 2 numeros pedidos
*/
#include<stdio.h>

int main()
{
    int a=0;//Defnimos e inicializamos las variables
    int b=0;
    int c=0;

    printf("Ingrese dos numeros!\n");//Pedimos los numeros
    scanf("%d",&a);//Pedimos a
    scanf("%d",&b);//Pedimos b

    c=a+b;
    printf("La suma de los numeros es:%d \n",c);//Mostramos el resultado

    return(0);
}
