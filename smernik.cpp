/*
Author: Boris Galický, 1.N
Date: 
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int a=10;
	int *p;//vytvorenie smerníka "p"
	p=&a;//smerník p odkazujeme na adresu premennej "a"
	*p=30;//pomocou smerníka "p" meníme hodnotu premennej "a" z 10 na 30
	printf("%d",a);//vypisovanie už zmenenej premennej "a"
	printf("\n%d %d",p,*p);//vypisovanie adresy premennej "a" v pamäti RAM (p=&a) a hdontu zmeny premennej "a" (*p=30)
	p=NULL;//vynulovanie (odpojenie) smerníka
}
