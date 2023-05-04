#include <stdio.h>
#include <stdint.h>

int main()
{
    char car = ' ';

    printf("Ingrese un caracter\n");
    scanf("%c", &car);

    while (car != '0')
    {
        if (car >= '0' && car <= '9')
        {
            printf("El caracter %c es un numero\n", car);
        }
        else if (car >= 'A' && car <= 'Z')
        {
            printf("El caracter %c es una MAYUSCULA\n", car);
            if (car == 'A' || car == 'E' || car == 'I' || car == 'O' || car == 'U')
            {
                printf("El caracter %c es una vocal\n", car);
            }
            else
            {
                printf("El caracter %c es una consonante\n", car);
            }
        }
        else if (car >= 'a' && car <= 'z')
        {
            printf("El caracter %c es una minuscula\n", car);
            if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u')
            {
                printf("El caracter %c es una vocal\n", car);
            }
            else
            {
                printf("El caracter %c es una consonante\n", car);
            }
        }
        else
        {
            printf("El caracter %c no es numero ni letra\n", car);
        }

        printf("Ingrese otro caracter\n");
        fflush(stdin);
        scanf("%c", &car);
    }

    return (0);
}
