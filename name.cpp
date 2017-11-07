/*
Author: Boris Galický, 1.N
Date: 07-11-2017 
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
	char text[500];
	int i;
	int wrong=0;
	int task;
	printf("Task 1: Correctly written name and generated e-mail adress.\n");
	printf("Task 2: Counting of quantity of letters in the text.\n");
	printf("Which task do you want to run? (1 or 2): ");
	scanf("%d",&task);
	while(task>2 or task<=0)
	{
	printf("Wrong input!\n");
	printf("Which task do you want to run? (1 or 2): ");
	scanf("%d",&task);
	}
	if(task==1)
	{
	printf("\n");
	printf("Insert the first name: ");
	scanf("%s",&first);
	printf("Insert the last name: ");
	scanf("%s",&last);
	printf("\n");
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
			printf("@akademiasovy.sk\n");
		}
	}
	else
	{
	printf("\nNote: Please, use underscore instead of space to correct running of program\n");
	printf("Insert a text: ");
	scanf("%s",&text);
	//strcpy(text,"FC Barcelona is the best football club in the world."); //skopíruje text do po¾a
	//strcat(text,"Main rival of FCB is Real Madrid CF."); //pridá text do po¾a
	int count[26];
	int i;
	char z;
	for(i=0;i<26;i++)
	{
	count[i]=0;
	}
	int len=strlen(text);
	for(i=0;i<len;i++)
	{
		z=text[i];
		z=toupper(z);
			if(isalpha(z))
			{
			count[z-'A']++;
			}
	}
	for(i=0;i<26;i++)
		{
		printf("\n%c: %d",i+'A',count[i]);
		}
	}
}
