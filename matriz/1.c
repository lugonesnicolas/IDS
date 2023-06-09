#include<stdio.h>

void imprimir(char m[][3]);

int main()
{
    char matriz[3][3]={{'_','_','_'},{'_','_','_'},{'_','_','_'}};
/*    char matriz[3][3]={{'_','_','_'},{'_','_','_'},{'_','_','_'}};*/

    imprimir(matriz);

    return 0;
}

void imprimir(char m[][3])
{
    int f=0;
    int c=0;
    for(f=0;f<3;f++)
    {
        for(c=0;c<3;c++)
        {
            printf("%c",m[f][c]);
        }
        printf("\n");
    }
}
