#include <stdio.h>
#define MAX 2//Tamaño del struct

struct datos //Se crea la estructura
{
    char nombre[20];
    char apellido[20];
    char dni[10];
    float primernota;
    float segundanota;
    float promedio;
};

void mostrarDatos(struct datos p[], int tam);//Funcion para mostrar los datos
void cargarDatos(struct datos p[], int tam);//Funcion que crea la estructura del tamaño asignado
void cargarAlumnos(struct datos p[], int tam);//Funcion que carga los alumnos en el struct

int main()
{
    int i=0;
    char op='_';
    struct datos alumnos[MAX];//Definimos el struct
    cargarDatos(alumnos, MAX);//Se crea el struct

    while(op!='s')//Menu
    {
        printf("\ns: Para salir\n");
        printf("c: Para cargar los datos\n");
        printf("m: Para mostrar los datos\n");

        fflush(stdin);
        scanf("%c", &op);

        switch (op)
        {
        case 's':
            break;
        case 'm':
            mostrarDatos(alumnos, MAX);
            break;
        case 'c':
            cargarAlumnos(alumnos, MAX);
            break;
        default:
        printf("Incorrecto\n");
        break;
        }
    }

    return (0);
}

void cargarDatos(struct datos p[], int tam)
{
    int i=0;
    int f=0;
    for (i=0; i<tam && f!=1; i++)
    {
        strcpy(p[i].nombre, "_");
        strcpy(p[i].apellido, "_");
    }
}

void mostrarDatos(struct datos p[], int tam)
{
    int i=0;
    printf("_____________________________________________________________________________________________\n");
    for (i = 0; i < tam; i++)
  {
    if (strcmp(p[i].nombre, "_") != 0)
    {
      printf("%d ", i);
      printf("Nombre:%s ", p[i].nombre);
      printf("%s ", p[i].apellido);
      printf("DNI:%s ", p[i].dni);
      printf("Promedio:%.2f\n", p[i].promedio);
    }
  }
}

void cargarAlumnos(struct datos p[], int tam)
{
    int i = 0;
    int f = 0;
    for (i = 0; i < tam && f <= 10; i++)
    {
        if (strcmp(p[i].nombre, "_") == 0)
        {
            printf("Ingrese el nombre del alumno\n");
            scanf("%s", p[i].nombre);
            printf("Ingrese el apellido del alumno\n");
            scanf("%s", p[i].apellido);
            printf("Ingrese el dni del alumno\n");
            scanf("%s", p[i].dni);
            printf("Ingrese la primer nota del alumno\n");
            scanf("%f", &p[i].primernota);
            printf("Ingrese la segunda nota del alumno\n");
            scanf("%f", &p[i].segundanota);
            p[i].promedio=((p[i].primernota)+(p[i].segundanota))/2;
            f++;
        }
    }
}
