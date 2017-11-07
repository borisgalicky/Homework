/*
Author: Boris Galický, 1.N
Date: 06-11-2017 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
int main()
{
	char first[11];
	char last[11];
	int i;
	int wrong=0;
	printf("Insert the first name: ");
	scanf("%s",&first);
	printf("Insert the last name: ");
	scanf("%s",&last);
	int length=strlen(last);
	int length2=strlen(first);
	for(i=0;i<length;i++)
	{
	char z=first[i];
		if(z>='0' and z<='9')
		{
		wrong++;
		}
	}
	
	for(i=0;i<length;i++)
	{
	char z=last[i];
		if(z>='0' and z<='9')
		{
		wrong++;
		}
	}
	
	if(wrong>0)
	{
	printf("Wrong input!");
	}
	
	else
	{
		char z=first[0];
		if(z>='a' and z<='z')
		{
		z=(z-32);
		printf("%c.",z);
		}
		else
		{
		printf("%c.",z);
		}
	
		char x=last[0];
		if(x>='a' and x<='z')
		{
		x=(x-32);
		putchar(x);
		}
		else if(x>='A' and x<='Z')
		{
		putchar(x);
		}
	
		for(i=1;i<length;i++)
		{
		char y=last[i];
			if(y>='a' and y<='z')
			{
			putchar(y);
			}
			else if(x>='A' and x<='Z')
			{
			y=(y+32);
			putchar(y);
			}
		}
		printf("\n");
		for(i=0;i<length2;i++)
		{
		char z=first[i];
			if(z>='a' and z<='z')
			{
			putchar(z);
			}
			else if(z>='A' and z<='Z')
			{
			z=(z+32);
			putchar(z);
			}
		}
		printf(".");
		for(i=0;i<length;i++)
		{
		char z=last[i];
			if(z>='a' and z<='z')
			{
			putchar(z);
			}
			else if(z>='A' and z<='Z')
			{
			z=(z+32);
			putchar(z);
			}
		}
		printf("@akademiasovy.sk");
	}
}
