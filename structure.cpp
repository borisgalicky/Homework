/*
Author: Boris Galický, 1.N
Date: 13-11-2017
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h> 
#include <ctype.h>
#include <string.h>
typedef struct
{
	char name[20];
	int age;
	float salary;
}person;

int main()
{
	person emp1,emp2;
	strcpy(emp1.name,"Viktor");
	emp1.age=32;
	emp1.salary=1007.13;
	strcpy(emp2.name,"Boris");
	emp2.age=19;
	emp2.salary=900,50;
	printf("Name: %s\nAge: %d\nSalary: %1.2feur\n",emp1.name,emp1.age,emp1.salary);
	printf("\n");
	person employees[20];
	/*
	printf("Enter name: ");
	scanf("%s",&employees[0].name);
	printf("Enter age: ");
	scanf("%d",&employees[0].age);
	printf("Enter salary: ");
	scanf("%1.2f",&employees[0].salary);
	*/
	srand(time(NULL));
	int i,j,k;
	for(i=0;i<20;i++)
	{
		for(j=0;j<6;j++)
		{
		employees[i].name[j]=rand()%26+'A';
		}
	employees[i].name[6]='\0';	
	employees[i].age=rand()%37+18;
	employees[i].salary=rand()%1000+500;
	}
	for(i=0;i<20;i++)
	{
	printf("\nName: %s\nAge: %d\nSalary: %1.2f\n",employees[i].name,employees[i].age,employees[i].salary);
	}
	float result=0;
	float finalresult=0;
	for(i=0;i<20;i+=2)
	{
	result=(employees[i].salary)+(employees[i+1].salary);
	finalresult=(finalresult+result);
	}
	float average=(finalresult/20);
	printf("\nSalary average: %1.2f\n",average);
	
	float ageresult=0;
	float finalageresult=0;
	for(i=0;i<20;i+=2)
	{
	ageresult=(employees[i].age)+(employees[i+1].age);
	finalageresult=(finalageresult+ageresult);
	}
	float ageavg=(finalageresult/20);
	printf("\nAge average: %1.2f\n",ageavg);
	printf("\nEmployees in age 20-30: ");
	int count=0;
	for(i=0;i<20;i++)
	{
		if(employees[i].age>=20 and employees[i].age<=30)
		{
		printf("%s ",employees[i].name);
		count ++;
		}
	}
	printf("\nCount of employees in age 20-30: %d\n",count);
	printf("\nEmployees with salary over 1300: ");
	int count2=0;
	for(i=0;i<20;i++)
	{
		if(employees[i].salary>1300)
		{
		printf("%s ",employees[i].name);
		count2++;
		}
	}
	printf("\nCount of employees with salary over 1300: %d\n",count2);
}
