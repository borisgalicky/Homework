/*
Author: Boris Galický, 1.N
Date: 08-11-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char answer[30];
	int i;
	int q=1;
	printf("**************************************\n");
	printf("************** NHL QUIZ **************\n");
	printf("**************************************\n");
	printf("\nWelcome to the NHL quiz!");
	printf("\nYou've got 3 attempts for each question except third one. Good luck and let's start!\n\n");
	system("pause"); 
	printf("\nQuestion number %d\n",q);
    printf("Who's defending NHL champion?\n");
    printf("\nA: Tampa Bay Lightning");
    printf("\nB: Pittsburgh Penguins");
    printf("\nC: Detroit Red Wings");
    printf("\nD: Nashville Predators\n");
    printf("\nYour answer: ");
    scanf("%s",&answer);
    int length=strlen(answer);
    int count=1;
    int correct=0;
    int attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"b")!=0) and count<3)
    {
    count++;
    attempts--;
    printf("\nWrong answer!\n");
    printf("Attempts remaining: %d\n\n",attempts);
    printf("Who's defending NHL champion? ");
    printf("\nA: Tampa Bay Lightning");
    printf("\nB: Pittsburgh Penguins");
    printf("\nC: Detroit Red Wings");
    printf("\nD: Nashville Predators\n");
    printf("\nYour answer: ");
    scanf("%s",&answer); 
	}
	if((strcmp(answer,"b")==0))
	{
	count--;
	printf("\nCorrect answer!\n");
	printf("***************\n");
	correct++;
	}
	if(count==3)
	{
	printf("\nToo many wrong attempts!\n");
	printf("************************\n");
	}
	q++;
	printf("\nQuestion number %d\n",q);
	printf("Which player earned the most points in regular season 2016/2017?\n ");
    printf("\nA: Sidney Crosby");
    printf("\nB: Erik Carlsson");
    printf("\nC: Connor McDavid");
    printf("\nD: Nikita Kucherov\n");
    printf("\nYour answer: ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"c")!=0) and count<3)
    {
    count++;
    attempts--;
    printf("\nWrong answer!\n");
    printf("Attempts remaining: %d\n\n",attempts);
    printf("Which player earned the most points in regular season 2016/2017?\n ");
    printf("\nA: Sidney Crosby");
    printf("\nB: Erik Carlsson");
    printf("\nC: Connor McDavid");
    printf("\nD: Nikita Kucherov\n");
    printf("\nYour answer: ");
    scanf("%s",&answer); 
	}
	if((strcmp(answer,"c")==0))
	{
	count--;
	printf("\nCorrect answer!\n");
	printf("***************\n");
	correct++;
	}
	if(count==3)
	{
	printf("\nToo many wrong attempts!\n");
	printf("************************\n");
	}
	q++;
	printf("\nQuestion number %d\n",q);
	printf("Wayne Gretzky's number 99 was retired forever, is it true?\n ");
    printf("\nA: Yes");
    printf("\nB: No\n");
    printf("\nYour answer: ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"a")!=0) and count<1)
    {
    count++;
    attempts--;
    printf("\nWrong answer!\n");
    printf("Attempts remaining: %d\n\n",attempts);
    printf("Wayne Gretzky's number 99 was retired forever, is it true?\n ");
    printf("\nA: Yes");
    printf("\nB: No\n");
    printf("\nYour answer: ");
    scanf("%s",&answer); 
	}
	if((strcmp(answer,"a")==0))
	{
	count--;
	printf("\nCorrect answer!\n");
	printf("***************\n");
	correct++;
	}
	if(count==1)
	{
	printf("\nWrong answer!\n");
	printf("*************\n");
	}
	q++;
	printf("\nQuestion number %d\n",q);
	printf("Which team has earned the most Stanley Cups in franchise history?\n ");
    printf("\nA: New York Rangers");
    printf("\nB: Edmonton Oilers");
    printf("\nC: Toronto Maple Leafs");
    printf("\nD: Montreal Canadiens\n");
    printf("\nYour answer: ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"d")!=0) and count<3)
    {
    count++;
    attempts--;
    printf("\nWrong answer!\n");
    printf("Attempts remaining: %d\n\n",attempts);
    printf("Which team has earned the most Stanley Cups in franchise history?\n ");
    printf("\nA: New York Rangers");
    printf("\nB: Edmonton Oilers");
    printf("\nC: Toronto Maple Leafs");
    printf("\nD: Montreal Canadiens\n");
    printf("\nYour answer: ");
	scanf("%s",answer);
	}
	if((strcmp(answer,"d")==0))
	{
	count--;
	printf("\nCorrect answer!\n");
	printf("***************\n");
	correct++;
	}
	if(count==3)
	{
	printf("\nToo many wrong attempts!\n");
	printf("************************\n");
	}
	
	printf("\nQuiz completed! Your score is %d/%d",correct,q);
	printf("\nQuiz made by Boris98.\n");
	system("pause");  
   	return 0;
}
