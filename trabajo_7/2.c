#include<stdio.h>

void imprimir(char m[][10]);
void llenarespa(char m[][10]);

void ponerficha(char m[][10]);
int main ()
{


char matriz[10][10];

//imprimirdire(matriz);
llenarespa(matriz);
ponerficha(matriz);
imprimir(matriz);




  return 0;
}


void llenarespa(char t[][10])
{
    int f=0;
    int c=0;
    for(f=0;f<10;f++)
    {
      for(c=0;c<10;c++)
      {
      t[f][c]=' ';
      }
    }
}


void ponerficha(char m[][10])

{
    int f=0;
    int c=0;
    for(f=0;f<10;f++)
    {
      for(c=0;c<10;c++)
      {
        if(f==0 || f==9 || c==0 || c==9)
        {
          m[f][c]='Q';
        }
        if((f==c)&&(f>0)&&(f<9))
        {
          m[f][c]='H';
        }
        if( (f>0) && (f<9) && (c>0) && (c<9) && ((f*10+c) % 9 ==0) )
        {
          m[f][c]='H';
        }

//          if( ((f+c) == 9) && (f>0) && (f<9) && (c>0) && (c<9) )
//         {
//           m[f][c]='H';
//         }


      }
    }
}


void imprimir(char t[][10])
{
    int f=0;
    int c=0;
    for(f=0;f<10;f++)
    {
      for(c=0;c<10;c++)
      {
      printf("%c",t[f][c]);
      }
      printf("\n");
    }
}


