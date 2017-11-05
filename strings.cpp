/*
Author: Boris Galický
Date: 05-11-2017 
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char text[11];
    char textUpper[11];
    char textSmall[11];
    printf("Insert a word: ");
    scanf("%s",&text);
    printf("\nYour text: %s\n",text);
    int i;
	int count=0;
    int length = strlen(text);
    printf("\nNumber of characters: %d", length);
    
	for(i=0;i<length;i++)
	{
        if(text[i]>='A' and text[i]<='Z')
		{
        count++;
        }
	}
	printf("\nNumber of capital letters: %d", count);
    
    count=0;
	for(i=0;i<length;i++)
	{
        if(text[i]>='a' and text[i]<='z')
		{
        count++;
        }
	}
	printf("\nNumber of small letters: %d", count);
	
	count=0;
	for(i=0;i<length;i++)
	{
        if(text[i]>='0' and text[i]<='9')
		{
        count++;
        }
	}
	printf("\nNumber of digits: %d", count);
	
	count=0;
	for(i=0;i<length;i++)
	{
	char z=text[i];
		if(z>='a' and z<='z')
		{
		z=z-32;
		}
        if(z=='A' or z=='E' or z=='I' or z=='O'or z=='U' or z=='Y')
		{
        count++;
        }
	}
	printf("\nNumber of vowels: %d", count);
	
	printf("\nReverse: ");
	for(i=length-1;i>=0;i--)
	{
	printf("%c",text[i]);
	}   

	for(i=0; i<=length; i++)
	{
	char z=text[i];
	   if(z>='a' and z<='z')
	   {
	   z=(z-32);
	   }
	textUpper[i]=z;  	     
	}
	printf("\nUpper text: %s", textUpper); 
	
	for(i=0; i<=length; i++)
	{
	char z=text[i];
	   if(z>='A' and z<='Z')
	   {
	   z=(z+32);
	   }
	   textSmall[i]=z;  	     
	}
	printf("\nSmall text: %s", textSmall); 
	
	printf("\nText without digits: ");
	for(i=0;i<length;i++)
	{
	   char z=text[i];
	   if(z>='0' and z<='9')
	   {
	   printf("?");
	   }
	   else
	   {
	   putchar(z);   //alternative: printf("%c",z);   
	   }		
	}
	
	printf("\nCeasar 1: ");
	for(i=0;i<length;i++)
	{
	char z=text[i];
		if(z>='a' and z<='z')
		{
			if(z=='z')
			{
			z=(z-26);
			putchar(z);
			}
			else
			{
			z=(z+1);
			putchar(z);
			}
		}
		if(z>='A' and z<='Z')
		{
			if(z=='Z')
			{
			z=(z-26);
			putchar(z);
			}
			else
			{
			z=(z+1);
			putchar(z);
			}
		}
		if(z>='0' and z<='9')
		{
			if(z=='9')
			{
			z=(z-9);
			putchar(z);
			}
			else
			{
			z=(z+1);
			putchar(z);
			}
		}
	}
	printf("\n");
	
	printf("Special text: ");
	for(i=0;i<length;i++)
	{
		char z=text[i];
		if(z>='0' and z<='9')
		{
		printf(" ");
		}
		else if(z>='a' and z<='z')
        	{
        	z=(z-32);
        	putchar(z);
			}
		else if(z>='A' and z<='Z')
        	{
        	z=(z+32);
        	putchar(z);
			}
	}
	
	printf("\n");
	printf("Another special text: ");
	for(i=0;i<length;i++)
	{
	char z=text[i];
		if(z=='Y')
		{
		z=(z-16);
		putchar(z);
		}
		else if(z=='y')
		{
		z=(z-16);
		putchar(z);
		}
		else if(z=='I')
		{
		z=(z+16);
		putchar(z);
		}
		else if(z=='i')
		{
		z=(z+16);
		putchar(z);
		}
		else
		{
		putchar(z);
		}
	}
}

