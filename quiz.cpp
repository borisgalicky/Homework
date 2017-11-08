/*
Authr: Boris Galický, 1.N
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
	printf("****************************************\n");
	printf("************** SUPER QUIZ **************\n");
	printf("****************************************\n");
	printf("\nWelcome to the super quiz!");
	printf("\nYou've got 3 attempts for each question.\n");
	printf("\nQuestion number 1\n");
    printf("What's the capital city of Slovakia? ");
    scanf("%s",&answer);
    int length=strlen(answer);
    int count=1;
    int correct=0;
    int attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"bratislava")!=0) and count<3)
    {
    count++;
    attempts--;
    printf("\nWrong answer!\n");
    printf("Attempts remaining: %d\n\n",attempts);
    printf("What's the capital city of Slovakia? ");
    scanf("%s",&answer); 
	}
	if((strcmp(answer,"bratislava")==0))
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
	
	printf("\nQuestion number 2");
	printf("\nSlovak Republic was established in...? ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"1993")!=0) and count<3)
    {
    count++;
    attempts--;
    printf("\nWrong answer!\n");
    printf("Attempts remaining: %d\n\n",attempts);
    printf("Slovak Republic was established in...? ");
    scanf("%s",&answer); 
	}
	if((strcmp(answer,"1993")==0))
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
	
	printf("\nQuestion number 3");
	printf("\nHow much is 2*2? ");
	scanf("%s",answer);
	count=1;
    attempts=3;
    for(i=0;i<length;i++)
    {
    answer[i]=tolower(answer[i]);
	}
    while((strcmp(answer,"4")!=0) and count<3)
    {
    count++;
    attempts--;
    printf("\nWrong answer!\n");
    printf("Attempts remaining: %d\n\n",attempts);
    printf("How much is 2*2? ");
    scanf("%s",&answer); 
	}
	if((strcmp(answer,"4")==0))
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
	printf("\nQuiz completed! Your score is %d/3",correct);
	printf("\nQuiz made by Boris98.\n");
	system("pause");  
   	return 0;
}
