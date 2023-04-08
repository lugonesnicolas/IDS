#include <stdio.h>

int main()
{
    int bruto=0;//Inicializamos
    int neto=0;
    float descuento=0.7;

    printf("Ingrese cual es el sueldo del empleado.\n");//Pedimos los datos
    scanf("%d", &bruto);
    neto=bruto*descuento;

    printf("El sueldo neto es:%d", neto);//Mostramos el resultado

    return (0);
}
