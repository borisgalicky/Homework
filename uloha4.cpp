/*
Autor: Boris Galický, 1.N
Dátum: 20.10.2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 19
int main()
{
    int p[N];
    int i,x,y,w,z;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int f=0;
    int g=0;
    int h=0;
    int j=0;
    int k=0;
    int l=0;
    int m=0;
    int n=0;
    int o=0;
    int q=0;
    int max=0;
    int min=10000;
    srand(time(NULL));
    printf("Nahodne cisla:\n");
    for(i=0;i<=N;i++)
    {
    p[i]=rand()%9990+10;
    printf("%d ",p[i]);
	}
	for(i=0;i<=N;i++)
	{
	x=p[i];
		if(x%2==0)
		{
		a+=1;
		}
		else
		{
		b+=1;
		}
	}
	printf("\n\nPocet parnych: %d",a);
	printf("\nPocet neparnych: %d",b);
	for(i=0;i<=N;i++)
	{
	x=p[i];
		if(x<100)
		{
		c+=1;
		}
		else if((x>=100) and (x<1000))
		{
		d+=1;
		}
		else
		{
		e+=1;
		}
	}
	printf("\nPocet 2-cifernych: %d",c);
	printf("\nPocet 3-cifernych: %d",d);
	printf("\nPocet 4-cifernych: %d",e);
	for(i=0;i<=N;i++)
	{
		x=p[i];
		if(x>max)
		{
		max=x;
		}
	}
	printf("\nNajvacsie cislo je: %d",max);
	for(i=0;i<=N;i++)
	{
		x=p[i];
		if(x<min)
		{
		min=x;
		}
	}
	printf("\nNajmensie cislo je: %d\n\nVypis odzadu:\n",min);
	for(i=N;i>=0;i--)
	{
	printf("%d ",p[i]);
	}
	for(i=0;i<=N;i++)
	{
	x=p[i];
		if(x%7==0)
		{
		f+=1;	
		}
	}
	printf("\n\nPocet cisel delitelnych cislom 7: %d\n",f);
	printf("Palindromy: ");
	for(i=0;i<=N;i++)
	{
	x=p[i];
		if(x<100)
		{
		g=(x%10);
		h=(x/10);
			if(g==h)
			{
			printf("%d ",x);
			}
		}
		else if((x>=100) and (x<1000))
		{
		j=(x%10);
		k=(x/100);
			if(j==k)
			{
			printf("%d ",x);
			}	
		}
		else
		{
		q=x;
		l=(x%10);
    	x=(x/10);
    	m=(x%10);
	    x=(x/10);
	    n=(x%10);
    	x=(x/10);
    	o=(x%10);
    		if((l==o) and (m==n))
    		{
    		printf("%d ",q);	
			}
		}
	}
}
