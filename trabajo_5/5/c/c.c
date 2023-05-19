#include <stdio.h>

int convierteaint(char[]);

int main()
{
    char cadena[]="1234";
    int elentero=0;

    printf("La cadena es: %s \n", cadena);
    elentero=convierteaint(cadena);
    printf("El numero es: %d \n", elentero);
    return (0);
}

int convierteaint(char cad[])
{
    int num=0;
    printf("%c\n", cad[0]);
    printf("%c\n", cad[1]);
    printf("%c\n", cad[2]);
    printf("%c\n", cad[3]);

    printf("%d\n", cad[0]);
    printf("%d\n", cad[1]);
    printf("%d\n", cad[2]);
    printf("%d\n", cad[3]);

    printf("%d\n", cad[0]-'0');
    printf("%d\n", cad[1]-'0');
    printf("%d\n", cad[2]-'0');
    printf("%d\n", cad[3]-'0');

    num=(cad[0]-'0')*1000+(cad[1]-'0')*100+(cad[2]-'0')*10+(cad[3]-'0')*1;

    return (num);
}

