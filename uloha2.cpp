/*
Autor: Boris Galický, 1.N
Dátum: 11.10.2017
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Zadaj rozmery trojuholnika: ");
    scanf("%d %d %d",&a,&b,&c);
    d=(a+b);
    e=(b+c);
    f=(c+a);
    if(((a<=0) or (b<=0) or (c<=0)) or ((d<=c) or (e<=a) or (f<=b)))
    {
    printf("Trojuholnik neexistuje");
	}
	else
	{
    	if(pow(a,2)==pow(b,2)+pow(c,2))
    	{
    	printf("Trojuholnik existuje a je pravouhly");
		}
		else
		{
			if(pow(b,2)==pow(a,2)+pow(c,2))
			{
			printf("Trojuholnik existuje a je pravouhly");
			}
			if(pow(c,2)==pow(b,2)+pow(a,2))
			{
			printf("Trojuholnik existuje a je pravouhly");
			}
			else
			{
			printf("Trojuholnik existuje ale nie je pravouhly");
			}
		}
	}
}

