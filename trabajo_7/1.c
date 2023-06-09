#include <stdio.h>

void mostrarmenu();
void mostrarnombre();
void convertirminuscula();

int main()
{
    int op=-1;
    while(op!=0)
    {
        mostrarmenu();
        fflush(stdin);
        scanf("%d", &op);
        switch(op)
        {
            case 0: break;
            case 1: printf("Nicolas Ezequiel Lugones\n"); break;
            case 2: convertirminuscula(); break;
            default: printf("Opcion incorrecta\n");
        }
    }

    return (0);
}

void mostrarmenu()
{
    printf("Presione 0 para salir\n");
    printf("Presione 1 para mostrar el autor del programa\n");
    printf("Presione 2 para convertir a minuscula\n");
}

void mostrarnombre()
{
    printf("Nicolas Ezequiel Lugones\n");
}

void convertirminuscula()
{
    int bandera=0;
    char nombre[20];
    printf("Ingrese su nombre\n");
    scanf("%s", nombre);
    fflush(stdin);
    printf("Ingreso:%s\n", nombre);
    for(int i=0; nombre[i]!='\0'; i++)
    {
        if(!((nombre[i]>='A' && nombre[i]<='Z') ||(nombre[i]>='a' && nombre[i]<='z')))
        {
            bandera=1;
        }
    }
    if(bandera==1)
    {
        printf("Solo se pueden ingresar letras\n");
    }
    else
    {
      for(int i=0; nombre[i]!='\0'; i++)
      {
          if(nombre[i]>='A' && nombre[i]<='Z')
          {
              nombre[i]=nombre[i]+32;
          }
      }
      printf("En minusculas:%s\n", nombre);
    }
}
