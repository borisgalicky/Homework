/*
Author: Boris Galickı, 1.N
Date: 31.10.2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int isNumberPalindrom(int number)
{
int a,b,c,d,e,f,g,h;
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
	c=(number%10);
	d=(number/100);
		if(c==d)
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
	e=(number%10);
	number=(number/10);
	f=(number%10);
	number=(number/10);
	g=(number%10);
	number=(number/10);
	h=(number%10);
    	if((e==h) and (f==g))
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
isNumberPalindrom(727);
}
