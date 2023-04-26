#include <stdio.h>
int main()
{
    char car = ' ';

    scanf("%c", &car);

    while (car != '0')
    {
        if (car >= '0' && car <= '9')
        {
            printf("El caract %c es un num\n", car);
        }
        else if (car >= 'A' && car <= 'Z')
        {
            printf("El caract %c es una MAYU\n", car);
            if (car == 'A' || car == 'E' || car == 'I' || car == 'O' || car == 'U')
            {
                printf("El caract %c es una vocal\n", car);
            }
            else
            {
                printf("El caract %c es una consonante\n", car);
            }
        }
        else if (car >= 'a' && car <= 'z')
        {
            printf("El caract %c es una minus\n", car);
            if (car == 'a' || car == 'e' || car == 'i' || car == 'o' || car == 'u')
            {
                printf("El caract %c es una vocal\n", car);
            }
            else
            {
                printf("El caract %c es una consonante\n", car);
            }
        }
        else
        {
            printf("El caract %c no es numero ni letra\n", car);
        }
        printf("Ingrese otro caracter");
        scanf("%c", &car);
    }

    return (0);
}
