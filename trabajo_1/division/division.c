#include <stdio.h>

int main(){
    int x=0;//Inicializamos y declaramos
    int y=0;
    int r=0;

    printf("Ingrese cuanto vale x \n");//Pedimos los datos
    scanf("%d",&x);
    printf("Ingrese cuanto vale y \n");
    scanf("%d",&y);
    r=x/y;//Calculamos la division

    printf("La division X/Y es igual a: %d \n", r);//Mostramos el resultado

    return (0);
}
