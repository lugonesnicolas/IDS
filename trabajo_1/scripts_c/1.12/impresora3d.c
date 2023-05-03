#include <stdio.h>
#define PI 3.141592
/* Una impresora 3d , utiliza 2 metros de filamento de 1,7mm de diámetro, para una pieza,indicar cuántos gramos serán consumidos de la bobina si la densidad es  1,25 g/cm3.
 */

main()
{
    float largo = 0;
    float diametro = 1.75;
    float radio = 0;
    float densidad = 1.25;
    float volumen = 0;
    float masa = 0;

    printf("Ingrese el largo del filamento\n");
    scanf("%d", &largo);
    printf("Primero pasamos la medida del filamento a centimetros, y calculamos el radio\n");

    largo = largo * 1000;
    radio = diametro / 2;
    volumen = PI * (radio * radio) * largo;
    masa = (volumen * densidad) / 1000;

    printf("En total se gastaron %f g de filamento\n", masa);

    return (0);
}
