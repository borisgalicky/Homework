/*
Author: Boris Galický, 1.N
Date: 10-11-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int bankcode;
	long long number;
	int i;
	int nullcount=0;
	printf("Enter bank code: ");
	scanf("%d",&bankcode);
	while((bankcode>8170) or (bankcode<200) or (bankcode<0))
	{
	printf("Wrong bank code!\n\n");
	printf("Enter bank code: ");
	scanf("%d",&bankcode);
	}
	printf("Enter number of account: ");
	scanf("%lld",&number);
	while((number<1000000) or (number>=10000000000))
	{
	printf("Wrong account number!\n\n");
	printf("Enter number of account: ");
	scanf("%lld",&number);
	}
	if(number>=1000000 and number<9999999)
	{
	nullcount=nullcount+3;
	}
	if(number>=10000000 and number<=99999999)
	{
	nullcount=nullcount+2;
	}
	if(number>=100000000 and number<=999999999)
	{
	nullcount=nullcount+1;
	}
	printf("SK");
	
	printf("  ");
	
	if(bankcode>=100 and bankcode<=999)
	{
	printf("0");
	printf("%d",bankcode);
	}
	else
	{
	printf("%d",bankcode);
	}
	printf("000000");
	for(i=1;i<=nullcount;i++)
	{
	printf("0");
	}
	printf("%lld",number);
}
