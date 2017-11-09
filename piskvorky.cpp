/*
Author: Boris Galickı, 1.N
Date: 08-11-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define R 3
#define S 3
int main()
{
	int field[R][S];
	int count1=0;
	int count2=0;
	int i,j;
	//do polí budú náhodne vygenerované nuly a jendotky
	//program vypíše víaza piškvoriek
	srand(time(NULL));
	for(i=0;i<R;i++)
	{
		for(j=0;j<S;j++)
		{
		field[i][j]=rand()%2;
		printf("%d ",field[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	
	//zisuje hornı riadok
	if(field[0][0]==field[0][1] and field[0][0]==field[0][2])
	{
		if(field[0][1]==0)
		{
		count2++;
		}
		if(field[0][1]==1)
		{
		count1++;
		}
	}
	
	//zisuje ¾avı ståpec
	if(field[0][0]==field[1][0] and field[1][0]==field[2][0])
	{
		if(field[1][0]==0)
		{
		count2++;
		}
		if(field[1][0]==1)
		{
		count1++;
		}
	}
	
	//zisuje strednı riadok
	if(field[1][0]==field[1][1] and field[1][1]==field[1][2])
	{
		if(field[1][1]==0)
		{
		count2++;
		}
		if(field[1][1]==1)
		{
		count1++;
		}
	}
	
	//zisuje strednı ståpec
	if(field[0][1]==field[1][1] and field[1][1]==field[2][1])
	{
		if(field[1][1]==0)
		{
		count2++;
		}
		if(field[1][1]==1)
		{
		count1++;
		}
	}
	
	//zisuje dolnı riadok
	if(field[2][0]==field[2][1] and field[2][1]==field[2][2])
	{
		if(field[2][1]==0)
		{
		count2++;
		}
		if(field[2][1]==1)
		{
		count1++;
		}
	}
	
	//zisuje pravı ståpec
	if(field[0][2]==field[1][2] and field[1][2]==field[2][2])
	{
		if(field[1][2]==0)
		{
		count2++;
		}
		if(field[1][2]==1)
		{
		count1++;
		}
	}
	
	//zisuje diagonálu z ¾ava do prava
	if(field[0][0]==field[1][1] and field[1][1]==field[2][2])
	{
		if(field[1][1]==0)
		{
		count2++;
		}
		if(field[1][1]==1)
		{
		count1++;
		}
	}
	
	//zisuje diagonálu z prava do ¾ava
	if(field[0][2]==field[1][1] and field[1][1]==field[2][0])
	{
		if(field[1][1]==0)
		{
		count2++;
		}
		if(field[1][1]==1)
		{
		count1++;
		}
	}
	
	printf("Score:\n");
	printf("Player1: %d\n",count1);
	printf("Player2: %d\n",count2);

	if(count1>count2)
	{
	printf("Player 1 won!");
	}
	else if(count2>count1)
	{
	printf("Player 2 won!");
	}
	else
	{
	printf("Draw!");
	}
}
