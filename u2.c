#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{


struct employee
{
	char name [20];
	int age;
	int work_exp;
	char gender[5];
	long int salary;
	char hometown[10];
};

	struct employee e[2];
	{
	int i,count=0,counte=0,amount=0,total;
	for(i=0;i<=1;i++)
	{
		printf("enter employee name :");
		scanf("%s",e[i].name);
		
		printf("enter employee age :");
		scanf("%d",&e[i].age);
		
		printf("enter employee work exp :");
		scanf("%d",&e[i].work_exp);
		
		printf("enter employee gender:");
		scanf("%s",e[i].gender);
		
		printf("enter employee salary :");
		scanf("%ld",&e[i].salary);
		
		printf("enter employee hometown :");
		scanf("%s",e[i].hometown);
		
		
	}
	
	
	for(i=0;i<=1;i++)
	{
		if(e[i].salary>50000)
		{
			printf("\nname : %s , age : %d , work_exp : %d , gender : %s ,salary : %ld , hometown : %s\n",
			e[i].name,e[i].age,e[i].work_exp,e[i].gender,e[i].salary,e[i].hometown);
		}
	}
	
	
	for(i=0;i<=1;i++)
	{
		if(strcmp(e[i].gender,"female")==0)
		{
			count++;
		}
	}
	
	printf("number of female : %d\n",count);
	
	
	
	for(i=0;i<=1;i++)
	{
		if(strcmp(e[i].hometown,"ahm")!=0)
		{
			counte++;
		}
	}
	
	printf("number of employee whose hometown is not ahmedabad : %d\n",counte);
	
	
	for(i=0;i<=1;i++)
	{
		if(e[i].work_exp > 15)
		{
			amount=e[i].salary* 0.1;
			total = e[i].salary+amount;
			printf("total salary = %d\n",total);
			
		}

	}
	
	
	
}
getch();
}


/*
enter employee name :urvish
enter employee age :78
enter employee work exp :45
enter employee gender:male
enter employee salary :80000
enter employee hometown :ahm
enter employee name :khushi
enter employee age :54
enter employee work exp :3
enter employee gender:female
enter employee salary :43000
enter employee hometown :surat

name : urvish , age : 78 , work_exp : 45 , gender : male ,salary : 80000 , hometown : ahm
number of female : 1
number of employee whose hometown is not ahmedabad : 1
total salary = 88000
*/
