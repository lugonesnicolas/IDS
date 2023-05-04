#include <stdio.h>

int main()
{
    int vehiculo=0;

    printf("Ingrese la opcion que corresponda.\n1)Moto\n2)Auto\n3)Camioneta\n4)Camion\n");
    scanf("%d", &vehiculo);

    switch(vehiculo)
    {
        case 1:  printf("El monto a cobrar es de $200\n");break;
        case 2:  printf("El monto a cobrar es de $400\n");break;
        case 3:  printf("El monto a cobrar es de $500\n");break;
        case 4:  printf("El monto a cobrar es de $1000\n");break;
        default: printf("Vehiculo incorrecto\n");
    }

    return (0);
}
