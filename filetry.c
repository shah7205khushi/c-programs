#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	
	struct student
	{
		char stu_name [20];
		int age;
		char last_degree[10];
		float per;
		char gender[5];
		long int aadhar;
	};
	
	
	struct student s[2];
	{
		FILE * fs;
		int i,count=0,countm=0;
		fs = fopen("data.txt","r");
		if(fs==NULL)
	{
		printf("file could not open\n");
		exit(1);
	}
		for(i=0;i<=2;i++)
		{
			
			//printf("enter student name :");
			fscanf(fs,"%s",s[i].stu_name);
			
			//printf("enter student age :");
			scanf("%d",&s[i].age);
			
			//printf("enter student last degree :");
			scanf("%s",s[i].last_degree);
			
			//printf("enter student persentage :");
			scanf("%f",&s[i].per);
			
			//printf("enter student gender :");
			scanf("%s",s[i].gender);
			
			//printf("enter student aadhar number :");
			scanf("%ld",&s[i].aadhar);
			
			
		}
		fclose(fs);
		for(i=0;i<=2;i++)
		{
			if(strcmp(s[i].gender,"female")==0)
			{
				count++;
			}
			else if(strcmp(s[i].gender,"male")==0)
			{
				countm++;
			}
	
		}
		
		printf("\nnumber of female is : %d",count);
		printf("\nnumber of male is : %d",countm);
		
		
		
		for(i=0;i<=2;i++)
		{
			if(s[i].age>20)
			{
				printf("\nname of the students whose age is more than 20 : %s\n",s[i].stu_name);
			}
		}
		
		
		for(i=0;i<=2;i++)
		{
			if(strcmp(s[i].gender,"female")==0)
			{
				printf("\n%s got %s degree\n",s[i].stu_name,s[i].last_degree);
			}
		}
		
		
		for(i=0;i<=2;i++)
		{
			if(strcmp(s[i].gender,"male")==0 && s[i].per > 75)
			{
				printf("\nstudents whose persentage is more than 75 : %s\n",s[i].stu_name);
			}
		}
		
		
		
		for(i=0;i<=2;i++)
		{
			if(strcmp(s[i].gender,"female")==0 && s[i].aadhar % 5 == 0)
			{
				printf("\nstudents whose aadhar card number end with 5 : %s\n",s[i].stu_name);
			}
		}
		
		
		
		}
		getch();
}

