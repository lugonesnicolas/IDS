#include <stdio.h>

int main()
{
    int vehiculo=0;

    printf("Ingrese la opcion que corresponda.\n1)Moto\n2)Auto\n3)Camioneta\n4)Camion\n");
    scanf("%d", &vehiculo);

   if(vehiculo==1)
   {
       printf("El monto a cobrar es de $200");
   }
   else if(vehiculo==2)
   {
       printf("El monto a cobrar es de $400");
   }
   else if(vehiculo==3)
   {
       printf("El monto a cobrar es de $500");
   }
   else if(vehiculo==4)
   {
       printf("El monto a cobrar es de $1000");
   }
   else
   {
       printf("El vehiculo ingresado es incorrecto");
   }

    return (0);
}
