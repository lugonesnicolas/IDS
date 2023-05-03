#include <stdio.h>
/*  Dado el precio de un producto se calcula “el ahorro del cliente”,
    cuando el artículo tiene un determinado % de descuento. */

main()
{
    int precio = 0;
    int descuento = 0;
    int total = 0;

    printf("Ingrese el valor del producto");
    scanf("%d", &precio);
    printf("Ingrese el descuento a aplicar");
    scanf("%d", &descuento);

    total = (precio * (100 - descuento)) / 100; //(100-descuento) nos da el valor que quedaria en el producto
    printf("El valor del producto con el descuento es: %d", total);

    return (0);
}
