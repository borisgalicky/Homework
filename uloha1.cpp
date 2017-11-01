/*
Autor: Boris Galický, 1.N
Dátum: 11.10.2017
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,e,f,g;
    printf("Zadaj rozmery trojuholnika: ");
    scanf("%d %d %d",&a,&b,&c);
    e=(a+b);
    f=(b+c);
    g=(c+a);
    if ((a<=0) or (b<=0) or (c<=0))
    {
    printf("Trojuholnik sa neda zostrojit");
	}
    else
    {
		if ((e<=c) or (f<=a) or (g<=b))
    	{
    	printf("Trojuholnik sa neda zostrojit");
		}
		else
		{
		printf("Trojuholnik sa da zostrojit");
		}
	}
}

