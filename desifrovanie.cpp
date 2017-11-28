/*
Author: Boris Galický, 1.N
Date: 28-11-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
typedef struct
{
	char origin[36];
	char key[36];
}

int main()
{
	int i;
	FILE *f;
	f=fopen("codeTable.txt","r");
	for(i=0;i<36;i++)
	{
	fscanf(f,"%s",&);
	}
	
	if(f==NULL)
	{
	printf("Can't find file!");
	return 1;
	}
	
	
}
