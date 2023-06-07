#include <stdio.h>
#define MAX 2//Tamaño del struct

struct datos //Definicion del struct
{
    char nombre[20];
    char apellido[20];
    int dni[10];
    float primernota;
    float segundanota;
    float promedio;
};

void mostrarDatos(struct datos p[], int tam);//Funcion para mostrar los datos
void cargarDatos(struct datos p[], int tam);//Funcion que carga los alumnos en el struct

int main()
{
    struct datos alumnos[MAX];//Definimos el struct
    cargarDatos(alumnos, MAX);
    mostrarDatos(alumnos, MAX);

    return (0);
}

void mostrarDatos(struct datos p[], int tam)
{
    int i=0;
    printf("____________________________________________________________________\n");
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

void cargarDatos(struct datos p[], int tam)
{
    int i = 0;
    int f = 0;
    for (i = 0; i < tam && f <= 10; i++)
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
