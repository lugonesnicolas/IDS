#include <stdio.h>
/*Le reste 1 , a un número C mientras este sea mayor o igual a 0.*/

int main()
{
    int c=0;//Inicializamos las variables

    printf("Ingrese un numero\n");//Pedimos C
    scanf("%d", &c);

    for(c;c>=0;c--)//Si es mayor que cero restar
    {
        printf("C es mayor o igual a cero %d\n",c);
    }

    return(0);
}
