/*
Author: Boris Galick�, 1.N
Date: 23-11-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char z;
	FILE *f;
	f=fopen("file.txt","r");
	if(f==NULL)
	{
	printf("Can't find file!");
	}
	while((z=fgetc(f))!=EOF)//na��tava do premennej "z" ka�d� znak zo s�boru, na ktor� ukazuje smern�k "f"
	{
		if(z=='%')
		{
		printf(" ");
		}
		
		else if(z=='j' or z=='J')
		{
		z=(z+15);
		putchar(z);
		}
		
		else if(z=='z' or z=='Z')
		{
		z=(z-17);
		putchar(z);
		}
		
		else
		{
		z=(z-1);
		putchar(z);
		}
	}
}
