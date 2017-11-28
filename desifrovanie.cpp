/*
Autor: Boris Galický, 1.N
Dátum: 28-11-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define A 36
#define B 2
int main()
{
	FILE *f=fopen("codeTable.txt","r");
	int i,j;
	char field[A][B];
	char z;
	
	if(f==NULL)
	{
	printf("Can't find file");
	return 1;
	}
	
	else
	{
		while(z=fgetc(f)!=EOF)
		{
			for(i=0;i<A;i++)
			{
				for(j=0;j<B;j++)
				{
				field[i][j]=z;
				putchar(z);
				}
			printf("\n");
			}
		}
	}
}
