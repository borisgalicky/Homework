/*
Author: Boris Galický, 1.N
Date: 04-12-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define R 6
#define S 2
int main()
{
	int a,b,c,d,i,j;
	int field[R][S];
	FILE *f=fopen("numbers.txt","r");
	FILE *p=fopen("results.txt","w");
	
	if(f==NULL)
	{
	printf("Can't find file!");
	}
	
	else
	{
		for(i=0;i<R;i++)//naèítavanie do matice
    	{
    		for(j=0;j<S;j++)
    		{
    		fscanf(f,"%d",&field[i][j]);
    		}
		}
    
    	for(i=0;i<R;i++)//výpoèet obsahu a obvodu
    	{
    		a=field[i][0];
    		b=field[i][1];
    		c=(a*b);
    		d=(2*a)+(2*b);
    		fprintf(p,"a=%d b=%d S=%d o=%d\n",a,b,c,d);
    	}
    	fclose(f);
    	fclose(p);
	}
}
