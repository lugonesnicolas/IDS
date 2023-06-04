#include <stdio.h>
#include <string.h>

struct producto
{
  char nombre[20];
  float precio;
  char caracteristica[50];
  int stock;
}; // declaracion de una estructura

#define MAX 10

void mostrarProductos(struct producto p[], int tam);
void cargarDatos(struct producto p[], int tam);
void cargarProductos(struct producto p[], int tam);
void venderProductos(struct producto p[], int tam);
// void update(struct producto p[], int pos);

int main(void)
{

  int i = 0;
  char op = '_';
  struct producto panaderia[MAX];
  cargarDatos(panaderia, MAX);

  while (op != 's')
  {
    printf("\ns: para salir\n");
    printf("m: para mostrarProductos\n");
    printf("c: para cargar un producto nuevo\n");
    printf("v: para vender\n\n");
/*    printf("u: para cambiar un producto\n\n");*/

    fflush(stdin); // win fflush();
    scanf("%c", &op);

    switch (op)
    {
    case 's':
      break;
    case 'm':
      mostrarProductos(panaderia, MAX);
      break;
    case 'c':
      cargarProductos(panaderia, MAX); // llamar a funcion que carga un producto nuevo
      break;
    case 'v':
      venderProductos(panaderia, MAX); // llamar a funcion que vende
      break;
/*     case 'u':
 *       printf("sin implementar\n"); // llamar a funcion que vende
 *       break;
 */

    default:
      printf("Incorrecto\n");
      break;
    }
  }
  return 0;
}

void cargarProductos(struct producto p[], int tam)
{
  int i = 0;
  int f = 0;
  for (i = 0; i < tam && f != 1; i++)
  {
    if (strcmp(p[i].nombre, "_") == 0)
    {
      printf("Ingrese el nombre del producto\n");
      scanf("%s", p[i].nombre);
      printf("Ingrese el precio del producto\n");
      scanf("%f", &p[i].precio);
      printf("Ingrese la caracteristica\n");
      scanf("%s", p[i].caracteristica);
      f = 1;
    }
  }
}

void cargarDatos(struct producto p[], int tam)
{
  int i = 0;

  for (i = 0; i < tam; i++)
  {
    strcpy(p[i].nombre, "_");
  }

  strcpy(p[0].nombre, "churros");
  p[0].precio = 122.45;
  strcpy(p[0].caracteristica, "dulce pastelera chocolate");
  p[0].stock = 5;

  strcpy(p[1].nombre, "berlinesa");
  p[1].precio = 140.22;
  strcpy(p[1].caracteristica, "dulce pastelera");
  p[1].stock = 10;

  strcpy(p[2].nombre, "torta frita");
  p[2].precio = 84;
  strcpy(p[2].caracteristica, "____");
  p[2].stock = 10;

  strcpy(p[8].nombre, "biscochitos");
  p[8].precio = 40;
  strcpy(p[8].caracteristica, "grasa");
  p[8].stock = 2;
}

void mostrarProductos(struct producto p[], int tam)
{
  int i = 0;
  printf("i nombre\tprecio\tcaracteristica\n");
  printf("_____________________________________________\n");
  for (i = 0; i < tam; i++)
  {
    if (strcmp(p[i].nombre, "_") != 0)
    {
      printf("%d ", i);
      printf("%s\t", p[i].nombre);
      printf("%.2f\t", p[i].precio);
      printf("%s \n", p[i].caracteristica);
    }
  }
}

void venderProductos(struct producto p[], int tam)
{
  int i = 0;
  int cantidad = 0;
  float valorfinal = 0;
  for (i = 0; i < tam; i++)
  {
    if (strcmp(p[i].nombre, "_") != 0)
    {
      printf("%d", i);
      printf("%s\t", p[i].nombre);
      printf("%2.f\t", p[i].precio);
      printf("%s\n", p[i].caracteristica);
      printf("Ingrese la cantidad de %s\n", p[i].nombre);
      scanf("%d", &cantidad);
      if (p[i].stock >= cantidad)
      {
        p[i].stock = p[i].stock - cantidad;
        valorfinal = valorfinal + p[i].precio * cantidad;
      }
      else
      {
        printf("No hay stock\n");
      }
    }
  }
  printf("El valor final es %f\n", valorfinal);
}
