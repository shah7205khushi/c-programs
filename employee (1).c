#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	struct employee
	{
		char emp_name[20];
		int age;
		int work_experience;
		char gender[5];
		float salary;
		char hometown[20];
		
	};
	
	struct employee e[3];
	{
		int i,count=0,counte=0,employ=0,c;
		for(i=0;i<3;i++)
		{
			printf("enter the name of employee: %d\n",i+1);
			scanf("%s",e[i].emp_name);
			
			printf("enter the age :");
			scanf("%d",&e[i].age);
			
			printf("enter the work experience :");
			scanf("%d",&e[i].work_experience);
			
			printf("enter the gender :");
			scanf("%s",e[i].gender);
			
			printf("enter the salary  :");
			scanf("%f",&e[i].salary);
			
			printf("enter the hometown :");
			scanf("%s",&e[i].hometown);
		}
		
		for(i=0;i<3;i++)
		{
			if(e[i].salary>50000)
			{
				printf("\nname:%s  \nage:%d  \nwork_experience:%d \ngender:%s \nsalary:%f  \nhometown:%s",e[i].emp_name,e[i].age,e[i].work_experience,e[i].gender,e[i].salary,e[i].hometown);
			}
		}
		
		for(i=0;i<3;i++)
	
	{
		if(e[i].gender=='f' || e[i].gender=='F')
		{
			count+=1;
		}
	}

     printf("\ndisplay the count of female employee:%d\n",count);



 for(i=0;i<3;i++)
     {
     	if(e[i].hometown!='ahmedabad' || e[i].hometown!='AHMEDABAD' );
     	{
     	   employ+=1;
		 }
	 }

     printf("\ndisplay the count of non ahmedabadi:%d",employ);
     
     for(i=0;i<3;i++)
     {
     	if(e[i].work_experience>15)
     	{
     		 printf("name:%s",e[i].emp_name);
     		 c=e[i].salary*10;
			 printf("the new salary is :%d\n",c);
		 }
	 }
     
	}
	getch();
	
}







