/*
Autor: Boris Galický, 1.N
Dátum: 
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int cisla[3];
    char pismena[2];
    int i,x;
    srand(time(NULL));
    printf("MT ");
    for(i=0;i<3;i++)
    {
    cisla[i]=rand()%9;
	printf("%d",cisla[i]);	
	}
	printf(" ");
	for(i=0;i<2;i++)
    {
    pismena[i]=rand()%26+65;
	printf("%c",pismena[i]);	
	}
}
