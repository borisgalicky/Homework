#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct
{
   char city[20];
   int pc;
}address_detail;

typedef struct
{
   char name[20];
   int age;
   float salary;
   address_detail address;
} person;

int main()
{
   srand(time(NULL));
   person student[20];
   strcpy(student[0].name,"Sebastian"); student[0].age=35; student[0].salary=1452; 
   strcpy(student[0].address.city,"Kosice"); student[0].address.pc=92512;
   strcpy(student[1].name,"David"); student[1].age=45; student[1].salary=1471; 
   strcpy(student[1].address.city,"Kosice"); student[1].address.pc=04001;
   strcpy(student[2].name,"Filip"); student[2].age=30; student[2].salary=987; 
   strcpy(student[2].address.city,"Bardejov"); student[2].address.pc=82356;
   strcpy(student[3].name,"Janka"); student[3].age=19; student[3].salary=1203; 
   strcpy(student[3].address.city,"Levoca"); student[3].address.pc=14780;
   strcpy(student[4].name,"Denisa"); student[4].age=35; student[4].salary=859; 
   strcpy(student[4].address.city,"Kosice"); student[4].address.pc=90845;

   strcpy(student[5].name,"Dominik"); student[5].age=28; student[5].salary=1452; 
   strcpy(student[5].address.city,"Kosice"); student[5].address.pc=84652;
   strcpy(student[6].name,"Jan"); student[6].age=31; student[6].salary=1020; 
   strcpy(student[6].address.city,"Senica"); student[6].address.pc=71254;
   strcpy(student[7].name,"Tobias"); student[7].age=32; student[7].salary=456; 
   strcpy(student[7].address.city,"Senec"); student[7].address.pc=12387;
   strcpy(student[8].name,"Tereza"); student[8].age=41; student[8].salary=785; 
   strcpy(student[8].address.city,"Poprad"); student[8].address.pc=12874;
   strcpy(student[9].name,"Slavka"); student[9].age=20; student[9].salary=1025; 
   strcpy(student[9].address.city,"Kosice"); student[9].address.pc=68787;
   
   strcpy(student[10].name,"Samuel"); student[10].age=24; student[10].salary=1332; 
   strcpy(student[10].address.city,"Kosice"); student[10].address.pc=87458;
   strcpy(student[11].name,"Xenia"); student[11].age=22; student[11].salary=800; 
   strcpy(student[11].address.city,"Presov"); student[11].address.pc=8001;
   strcpy(student[12].name,"Daniel"); student[12].age=44; student[12].salary=1701; 
   strcpy(student[12].address.city,"Michalovce"); student[12].address.pc=07101;
   strcpy(student[13].name,"Branislav"); student[13].age=25; student[13].salary=1101; 
   strcpy(student[13].address.city,"Martin"); student[13].address.pc=41444;
   strcpy(student[14].name,"Simona"); student[14].age=32; student[14].salary=1045; 
   strcpy(student[14].address.city,"Kosice"); student[14].address.pc=04022;
   
   strcpy(student[15].name,"Dusan"); student[15].age=18; student[15].salary=697; 
   strcpy(student[15].address.city,"Michalovce"); student[15].address.pc=55654;
   strcpy(student[16].name,"Kamil"); student[16].age=28; student[16].salary=1500; 
   strcpy(student[16].address.city,"Kosice"); student[16].address.pc=04011;
   strcpy(student[17].name,"Michaela"); student[17].age=27; student[17].salary=1300; 
   strcpy(student[17].address.city,"Senec"); student[17].address.pc=92545;
   strcpy(student[18].name,"Roman"); student[18].age=18; student[18].salary=1005; 
   strcpy(student[18].address.city,"Presov"); student[18].address.pc=04001;
   strcpy(student[19].name,"Oliver"); student[19].age=30; student[19].salary=1206; 
   strcpy(student[19].address.city,"Kosice"); student[19].address.pc=04012;
   
   int i,j,temp;
   printf("List of all students with all details:\n");
   printf("**************************************\n");
   for(i=0;i<20;i++)
   {
   printf("Name: %s, Age: %d, Salary: %.2f, City: %s, Postal code: %d\n",student[i].name,student[i].age,student[i].salary,student[i].address.city,student[i].address.pc);	
   }
   printf("\n\n");
   printf("1.)Students and their addresses:\n");
   for(i=0;i<20;i++)
   {
   printf("%s - %s\n",student[i].name,student[i].address.city);
   }
   char meno[20];
   float max=0;
   for(i=0;i<20;i++)
   {
   		if(student[i].salary>max)
		{
		max=student[i].salary;
		strcpy(meno,student[i].name);
		}
   }
   printf("\n2.)The highest salary has student %s with salary %1.2f",meno,max);
   
   printf("\n\n3.)Students from Kosice or Presov:\n");
   for(i=0;i<20;i++)
   {
   		if(strcmp(student[i].address.city,"Kosice")==0 or strcmp(student[i].address.city,"Presov")==0)
   		{
   		printf("%s\n",student[i].name);	
		}
   }
   
   printf("\n\n4.)Students with salary in interval 1000-1300:\n");
   for(i=0;i<20;i++)
   {
   		if((student[i].salary>=1000) and (student[i].salary<=1300))
   		{
   		printf("%s\n",student[i].name);	
		}
   }
   
   float celkovyvek=0;
   float priemernyvek=0;
   for(i=0;i<20;i++)
   {
   celkovyvek+=student[i].age;
   }
   priemernyvek=celkovyvek/20;
   printf("\n5.)Average age of all students is %1.2f",priemernyvek);
   
   float celkovyplat=0;
   float priemernyplat=0;
   float pocet=0;
   for(i=0;i<20;i++)
   {
   		if(student[i].age<30)
   		{
   		celkovyplat+=student[i].salary;
   		pocet++;
		}
   }
   priemernyplat=celkovyplat/pocet;
   printf("\n\n6.)Average salary of students under 30 years is %1.2f",priemernyplat);
   
   int cudzi=0;
   for(i=0;i<20;i++)
   {
   		if(strcmp(student[i].address.city,"Kosice")!=0)
   		{
   		cudzi++;
		}
   }
   printf("\n\n7.)%d students aren't from Kosice",cudzi);
   
   char oldest[20];
   float max2=0;
   for(i=0;i<20;i++)
   {
   		if(student[i].age>max2)
		{
		max2=student[i].age;
		strcpy(oldest,student[i].name);
		}
   }
   printf("\n\n8.)The oldest student is %s",oldest);
   
   int count=0;
   printf("\n\n9.)Count of students that their name is longer than 7 characters is");
   char meno2[20];
   for(i=0;i<20;i++)
   {
   strcpy(meno2,student[i].name);	
   int length=strlen(meno2);
   if(length>7)
   		{
   		count++;
   		}
   }
   printf(" %d",count);
   
   float ascend[20];
   
   for(i=0;i<20;i++)
   {
   ascend[i]=student[i].salary;
   }
   
   printf("\n\n10.)List of students in ascending sort by salary:\n");
   for(i=0;i<19;i++)
   {
      for(j=0;j<19;j++)
	  {
          if(ascend[j]>ascend[j+1])
		  {
          temp=ascend[j];
          ascend[j]=ascend[j+1];
          ascend[j+1]=temp;
		  }
	  }
   }
   
  	for(i=0;i<20;i++)
  	{
    printf("%s %1.2f\n",student[i].name,ascend[i]);  
	}
}
