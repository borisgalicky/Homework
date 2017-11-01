/*
* Author: Boris Galickı, 1.N
* Date: 31.10.2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int isNumberPalindrom(int number)
{
int a,b,c,d;
if(number<100)
	{
	a=(number%10);
	b=(number/10);
		if(a==b)
		{
		printf("YES");
		return 1;
		}
		else
		{
		printf("NO");
		return 0;
		}
	}
else if((number>=100) and (number<1000))
	{
	a=(number%10);
	b=(number/100);
		if(a==b)
		{
		printf("YES");
		return 1;
		}
		else
		{
		printf("NO");
		return 0;
		}	
	}
else if((number>=1000) and (number<10000))
	{
	a=(number%10);
	number=(number/10);
	b=(number%10);
	number=(number/10);
	c=(number%10);
	number=(number/10);
	d=(number%10);
    	if((a==d) and (b==c))
    	{
    	printf("YES");
    	return 1;
		}
		else
		{
		printf("NO");
		return 0;
		}
	}
}

int main()
{
isNumberPalindrom(725);
}
