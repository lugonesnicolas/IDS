#include <stdio.h>
#include <stdint.h>
/* El usuario ingresa un carácter por teclado ;hasta que el caracter
ingresado sea 0;el programa debe indicar si es una vocal, una
consonante , o un número. */

int main()
{
    char caracter = ' ';

    printf("Ingrese un caracter por teclado\n");
    scanf("%c", &caracter);

    while (caracter != '0')
    {
        if (caracter >= '1' && caracter <= '9')
        {
            printf("El caracter es un numero\n");
        }
        else if (caracter >= 'A' && caracter <= 'Z')
        {
            printf("El caracter es una MAYUSCULA\n");
            if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U')
            {
                printf("El caracter %c es una vocal\n", caracter);
            }
            else
            {
                printf("El caracter %c es una conconante\n", caracter);
            }
        }
        else if (caracter >= 'a' && caracter <= 'z')
        {
            printf("El caracter es una minuscula\n");
            if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u')
            {
                printf("El caracter %c es una vocal\n", caracter);
            }
            else
            {
                printf("El caracter %c es una consonante\n", caracter);
            }
        }
        else
        {
            printf("El caracter no esta comprendido en este programa");
        }
        printf("Ingrese otro caracter\n");
        fflush(stdin);
        scanf("%c", &caracter);
    }

    return (0);
}
