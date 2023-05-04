/*El usuario ingresara el stock de un producto, si hay mas de 40 unidades,
  indicar alto stock, si hay menos de 10 indicar bajo stock.*/
#include <stdio.h>

int main()
{
    int producto=0;

    printf("Ingrese la cantidad que hay del producto\n");//Pedimos el dato
    scanf("%d", &producto);

    if(producto>40)//Comparamos y mostramos la condicion
    {
        printf("Stock alto");
    }else if(producto<10)
    {
        printf("Stock bajo");
    }
    else
    {
        printf("Stock regular");
    }


    return (0);
}
