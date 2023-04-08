/*Dado dos números A y B; restar el mayor al menor.*/
#include <stdio.h>

int main()
{
    int a=0;//Inicializamos las variables
    int b=0;
    int c=0;

    printf("Ingrese dos numeros distintos\n");//Pedimos los datos
    scanf("%d",&a);
    scanf("%d",&b);

    if(a>b)//Mostramos la condicion que corresponda
    {
        c=b-a;
        printf("B menos A es igual:%d",c);
    }else
    {
        c=a-b;
        printf("A menos B es igual:%d",c);
    }

    return(0);
}
