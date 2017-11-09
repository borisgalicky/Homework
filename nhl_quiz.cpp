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
	printf("\nYou've got 3 attempts for each question except third one.\nGood luck and let's start!\n\n");
	system("pause"); 
	printf("\nQuestion number %d\n",q);
    printf("Who's defending NHL champion?\n");
    printf("\nA: Tampa Bay Lightning");
    printf("\nB: Pittsburgh Penguins");
    printf("\nC: Detroit Red Wings");
    printf("\nD: Nashville Predators");
    printf("\nE: Anaheim Ducks");
    printf("\n\nYour answer: ");
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
    char z=answer[0];
    char x=answer[1];
    	if(((z>='f' and z<='z') or (z>='0' and z<='9') or (x>='f' and x<='z') or (x>='0' and x<='9')))
    	{
    	printf("\nInvalid answer!\nPlease choose one of options stated above.\n");
    	printf("\nWho's defending NHL champion? ");
    	printf("\nA: Tampa Bay Lightning");
    	printf("\nB: Pittsburgh Penguins");
    	printf("\nC: Detroit Red Wings");
    	printf("\nD: Nashville Predators");
    	printf("\nE: Anaheim Ducks");
    	printf("\n\nYour answer: ");
    	scanf("%s",&answer);
		}
		else
		{
    	count++;
    	attempts--;
    	printf("\nWrong answer!\n");
    	printf("Attempts remaining: %d\n\n",attempts);
    	printf("Who's defending NHL champion? ");
    	printf("\nA: Tampa Bay Lightning");
    	printf("\nB: Pittsburgh Penguins");
    	printf("\nC: Detroit Red Wings");
    	printf("\nD: Nashville Predators");
    	printf("\nE: Anaheim Ducks");
    	printf("\n\nYour answer: ");
    	scanf("%s",&answer); 
		}
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
    printf("\nD: Nikita Kucherov");
    printf("\nE: Evgeni Malkin");
    printf("\n\nYour answer: ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"c")!=0) and count<3)
    {
    char z=answer[0];
    char x=answer[1];
    	if(((z>='f' and z<='z') or (z>='0' and z<='9') or (x>='f' and x<='z') or (x>='0' and x<='9')))
    	{
    	printf("\nInvalid answer!\nPlease choose one of options stated above.\n");
    	printf("\nWhich player earned the most points in regular season 2016/2017?\n ");
    	printf("\nA: Sidney Crosby");
    	printf("\nB: Erik Carlsson");
    	printf("\nC: Connor McDavid");
    	printf("\nD: Nikita Kucherov");
    	printf("\nE: Evgeni Malkin");
    	printf("\n\nYour answer: ");
    	scanf("%s",&answer);
		}
		else
		{
    	count++;
    	attempts--;
    	printf("\nWrong answer!\n");
    	printf("Attempts remaining: %d\n\n",attempts);
    	printf("Which player earned the most points in regular season 2016/2017?\n ");
    	printf("\nA: Sidney Crosby");
    	printf("\nB: Erik Carlsson");
    	printf("\nC: Connor McDavid");
    	printf("\nD: Nikita Kucherov");
    	printf("\nE: Evgeni Malkin");
    	printf("\n\nYour answer: ");
    	scanf("%s",&answer); 
		}
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
    char z=answer[0];
    char x=answer[1];
    	if(((z>='c' and z<='z') or (z>='0' and z<='9') or (x>='c' and x<='z') or (x>='0' and x<='9')))
    	{
    	printf("\nInvalid answer!\nPlease choose one of options stated above.\n");
    	printf("\nWayne Gretzky's number 99 was retired forever, is it true?\n ");
    	printf("\nA: Yes");
    	printf("\nB: No\n");
    	printf("\n\nYour answer: ");
    	scanf("%s",&answer);
		}
		else
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
    printf("\nD: Montreal Canadiens");
    printf("\nE: Boston Bruins");
    printf("\n\nYour answer: ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"d")!=0) and count<3)
    {
    char z=answer[0];
    char x=answer[1];
    	if(((z>='f' and z<='z') or (z>='0' and z<='9') or (x>='f' and x<='z') or (x>='0' and x<='9')))
    	{
    	printf("\nInvalid answer!\nPlease choose one of options stated above.\n");
    	printf("\nWhich team has earned the most Stanley Cups in franchise history?\n ");
    	printf("\nA: New York Rangers");
    	printf("\nB: Edmonton Oilers");
    	printf("\nC: Toronto Maple Leafs");
    	printf("\nD: Montreal Canadiens");
    	printf("\nE: Boston Bruins");
    	printf("\n\nYour answer: ");
    	scanf("%s",&answer);
		}
		else
		{
		count++;
    	attempts--;
 	    printf("\nWrong answer!\n");
    	printf("Attempts remaining: %d\n\n",attempts);
    	printf("Which team has earned the most Stanley Cups in franchise history?\n ");
    	printf("\nA: New York Rangers");
    	printf("\nB: Edmonton Oilers");
    	printf("\nC: Toronto Maple Leafs");
    	printf("\nD: Montreal Canadiens");
    	printf("\nE: Boston Bruins");
    	printf("\n\nYour answer: ");
		scanf("%s",answer);
		}
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
	
	q++;
	printf("\nQuestion number %d\n",q);
	printf("What does mean Gordie Howe's hat-rick?\n ");
    printf("\nA: Three fights in one match");
    printf("\nB: Two goals and one assist in a match");
    printf("\nC: Three goals in a row in one match");
    printf("\nD: Three assists in one match");
    printf("\nE: Goal, fight and assist in one match");
    printf("\n\nYour answer: ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"e")!=0) and count<3)
    {
    char z=answer[0];
    char x=answer[1];
    	if(((z>='f' and z<='z') or (z>='0' and z<='9') or (x>='f' and x<='z') or (x>='0' and x<='9')))
    	{
    	printf("\nInvalid answer!\nPlease choose one of options stated above.\n");
    	printf("\nWhat does mean Gordie Howe's hat-rick?\n ");
    	printf("\nA: Three fights in one match");
    	printf("\nB: Two goals and one assist in a match");
    	printf("\nC: Three goals in a row in one match");
    	printf("\nD: Three assists in one match");
    	printf("\nE: Goal, fight and assist in one match");
    	printf("\n\nYour answer: ");
    	scanf("%s",&answer);
		}
		else
		{
		count++;
    	attempts--;
    	printf("\nWrong answer!\n");
    	printf("Attempts remaining: %d\n\n",attempts);
    	printf("What does mean Gordie Howe's hat-rick?\n ");
   		printf("\nA: Three fights in one match");
    	printf("\nB: Two goals and one assist in a match");
    	printf("\nC: Three goals in a row in one match");
    	printf("\nD: Three assists in one match");
    	printf("\nE: Goal, fight and assist in one match");
    	printf("\n\nYour answer: ");
		scanf("%s",answer);
		}
	}
	if((strcmp(answer,"e")==0))
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
	printf("Which two teams have been added to NHL during expansion draft in 2000?\n ");
    printf("\nA: Nashville Predators and San Jose Sharks");
    printf("\nB: Minnesota Wild and Columbus Blue Jackets");
    printf("\nC: Carolina Hurricanes and Winnipeg Jets");
    printf("\nD: Tampa Bay Lightning and Florida Panthers");
    printf("\nE: Atlanta Thrashers and Anaheim Ducks");
    printf("\n\nYour answer: ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"b")!=0) and count<3)
    {
    char z=answer[0];
    char x=answer[1];
    	if(((z>='f' and z<='z') or (z>='0' and z<='9') or (x>='f' and x<='z') or (x>='0' and x<='9')))
    	{
    	printf("\nInvalid answer!\nPlease choose one of options stated above.\n");
    	printf("\nWhich two teams have been added to NHL during expansion draft in 2000?\n ");
    	printf("\nA: Nashville Predators and San Jose Sharks");
    	printf("\nB: Minnesota Wild and Columbus Blue Jackets");
    	printf("\nC: Carolina Hurricanes and Winnipeg Jets");
    	printf("\nD: Tampa Bay Lightning and Florida Panthers");
    	printf("\nE: Atlanta Thrashers and Anaheim Ducks");
    	printf("\n\nYour answer: ");
		}
		else
		{
		count++;
    	attempts--;
    	printf("\nWrong answer!\n");
    	printf("Attempts remaining: %d\n\n",attempts);
    	printf("Which two teams have been added to NHL during expansion draft in 2000?\n ");
    	printf("\nA: Nashville Predators and San Jose Sharks");
    	printf("\nB: Minnesota Wild and Columbus Blue Jackets");
    	printf("\nC: Carolina Hurricanes and Winnipeg Jets");
    	printf("\nD: Tampa Bay Lightning and Florida Panthers");
    	printf("\nE: Atlanta Thrashers and Anaheim Ducks");
    	printf("\n\nYour answer: ");
		scanf("%s",answer);
		}
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
	printf("Jaromir Jagr played for Pittsburgh Penguins in years 1990-1998. Is it true?\n ");
    printf("\nA: Yes");
    printf("\nB: No");
    printf("\n\nYour answer: ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"b")!=0) and count<1)
    {
    char z=answer[0];
    char x=answer[1];
    	if(((z>='c' and z<='z') or (z>='0' and z<='9') or (x>='c' and x<='z') or (x>='0' and x<='9')))
    	{
    	printf("\nInvalid answer!\nPlease choose one of options stated above.\n");
    	printf("\nJaromir Jagr played for Pittsburgh Penguins in years 1989-1998. Is it true?\n ");
    	printf("\nA: Yes");
    	printf("\nB: No");
    	printf("\n\nYour answer: ");
		}
		else
		{
		count++;
    	attempts--;
    	printf("\nWrong answer!\n");
    	printf("Attempts remaining: %d\n\n",attempts);
    	printf("Jaromir Jagr played for Pittsburgh Penguins in years 1989-1998. Is it true?\n ");
    	printf("\nA: Yes");
    	printf("\nB: No");
    	printf("\n\nYour answer: ");
		scanf("%s",answer);
		}
    count++;
    attempts--;
    printf("\nWrong answer!\n");
    printf("Attempts remaining: %d\n\n",attempts);
    printf("Jaromir Jagr played for Pittsburgh Penguins in years 1989-1998. Is it true?\n ");
    printf("\nA: Yes");
    printf("\nB: No");
    printf("\n\nYour answer: ");
	scanf("%s",answer);
	}
	if((strcmp(answer,"b")==0))
	{
	count--;
	printf("\nCorrect answer!\n");
	printf("***************\n");
	correct++;
	}
	if(count==1)
	{
	printf("\nToo many wrong attempts!\n");
	printf("************************\n");
	}
	
	printf("\n");
	printf("Quiz completed! Your score is %d/%d - ",correct,q);
	if(correct==7)
	{
	printf("Excellent!");
	}
	if(correct==6)
	{
	printf("Perfect!");
	}
	if(correct==5)
	{
	printf("Very good!");
	}
	if(correct==4)
	{
	printf("Good!");
	}
	if(correct==3)
	{
	printf("Quite good!");
	}
	if(correct==2)
	{
	printf("Quite weak!");
	}
	if(correct==1)
	{
	printf("Poor!");
	}
	if(correct==0)
	{
	printf("So bad!");
	}
	printf("\nQuiz made by Boris98.\n");
	system("pause");  
   	return 0;
}
