#include <stdio.h>

void numtochar(unsigned int,char[]);

int main()
{
    char nombre[5];
    unsigned int num=1234;
    numtochar(num, nombre);
    printf("Este es el nombre: %s\n", nombre);

    return (0);
}

void numtochar(unsigned int nom,char nom2[])
{
    int um,c,d,u;
    um= (nom-(nom%1000))/1000;
    printf("%d \n", nom%1000);
    c= (nom-(nom%100)-(nom-nom%1000))/100;
    printf("%d \n", nom%100);
    d= (nom-(nom%10)-(nom-nom%1000)-(nom-(nom%100)-(nom-nom%1000)))/10;
    printf("%d \n", nom%10);
    u= nom-um*1000-c*100-d*10;

    nom2[0]=um+'0';
    nom2[1]=c+'0';
    nom2[2]=d+'0';
    nom2[3]=u+'0';
    nom2[4]='\0';

    printf("Variable um %d \n", um);
    printf("Variable c %d \n", c);
    printf("Variable d %d \n", d);
    printf("Variable d %d \n", u);
}
