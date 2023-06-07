#include <stdio.h>
#define MAX 1

struct datos
{
    char nombre[20];
    char apellido[20];
    char sexo;
    int edad;
};

void ingreso(struct datos p[], int tam);
void mostrar(struct datos p[], int tam);
void sexo(struct datos p[], int tam);
void edad(struct datos p[], int tam);

int main()
{
    struct datos persona[1];
    ingreso(persona, 1);
    mostrar(persona, 1);
    sexo(persona, 1);
    edad(persona, 1);

    return (0);
}

void ingreso(struct datos p[], int tam)
{
    int i=tam;
    printf("Ingrese el nombre\n");
    scanf("%s", p[i].nombre);
    printf("Ingrese el apellido\n");
    scanf("%s", p[i].apellido);
    fflush(stdin);
    printf("Ingrese el sexo\n");
    scanf("%c", &p[i].sexo);
    fflush(stdin);
    printf("Ingrese la edad\n");
    scanf("%d", &p[i].edad);
}

void mostrar(struct datos p[], int tam)
{
    int i=tam;
    printf("%s %s ", p[i].nombre, p[i].apellido);
}

void sexo(struct datos p[], int tam)
{
   if(p[tam].sexo=='m' || p[tam].sexo=='M')
       {
           printf("de sexo masculino ");
       }
    else
        {
            printf("de sexo femenino ");
        }
}

void edad(struct datos p[], int tam)
{
    if(p[tam].edad>=18)
    {
        printf("es mayor de edad\n");
    }
    else
    {
        printf("es menor de edad\n");
    }
}
