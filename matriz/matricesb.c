#include<stdio.h>

void imprimir(char m[][3]);
void imprimirdire(char m[][3]);
void ponerficha(char m[][3],int f,int c,char ficha);
int main ()
{


char matriz[3][3]={{'_','_','_'},{'_','_','_'},{'_','_','_'}};


//imprimirdire(matriz);
imprimir(matriz);
ponerficha(matriz,0,0,'X');
ponerficha(matriz,1,1,'X');
ponerficha(matriz,2,2,'X');
ponerficha(matriz,0,2,'O');
// matriz[0][0]='X';
// matriz[1][1]='X';
// matriz[2][2]='X';
imprimir(matriz);



  return 0;
}

void ponerficha(char m[][3],int f,int c,char ficha)

{
    if(m[f][c]=='_')
    {
      m[f][c]=ficha;
    }
}


void imprimir(char t[][3])
{
    int f=0;
    int c=0;
    for(f=0;f<3;f++)
    {
      for(c=0;c<3;c++)
      {
      printf("%c",t[f][c]);
      }
      printf("\n");
    }
}

void imprimirdire(char t[][3])
{
    int f=0;
    int c=0;
    for(f=0;f<3;f++)
    {
      for(c=0;c<3;c++)
      {
      printf("%p ",&(t[f][c]));
      }
      printf("\n");
    }
}
