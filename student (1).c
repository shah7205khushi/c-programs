#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	struct student
	{
		char stu_name[10];
		int age;
		char degree[30];
		float per;
		long int aadhar;
		char gender;
	};
	
	
	
	struct student s[6];
	{
		int i,count=0,countm=0;
		for(i=0;i<6;i++)
		{
			printf("enter the name of the student : %d\n",i+1);
			scanf("%s",s[i].stu_name);
			
			printf("enter the age :");
			scanf("%d",&s[i].age);
			
			printf("enter the last degree :");
			scanf("%s",s[i].degree);
			
			printf("enter the percentage :");
			scanf("%f",&s[i].per);
			
			printf("enter aadhar card number :");
			scanf("%d",&s[i].aadhar);
			
			printf("gender :");
			scanf("%s",&s[i].gender);
			
			
		}
		
		
		
		
		for(i=0;i<6;i++)
		{
			if(s[i].gender=='f')
			{
				count++;
			}
			else if(s[i].gender=='m')
			{
				countm++;
			}
		}
		printf("number of female is : %d\n",count);
        printf("number of male is : %d\n",countm);
		
		
		
		
		for(i=0;i<6;i++)
		{
			if(s[i].age>=20)
			{
				printf("a person whose age is greater than 20 : %s\n",s[i].stu_name);
			}
				}
				
				
				
				for(i=0;i<6;i++)
				{
					if(s[i].gender=='f')
					{
						printf("\n%s got %s degree",s[i].stu_name,s[i].degree);
					}
						}
						
						
							
						for(i=0;i<6;i++)
						{
							if(s[i].gender=='m'&& s[i].per>=75.00)
							{
								printf("\na person whose persentage is more than 75: %s\n",s[i].stu_name);
								
							}
							}
							
							
							
							for(i=0;i<6;i++)
				{
					if(s[i].gender=='f')
					{
						printf("\nfemale students : %s ",s[i].stu_name);
					}
					
				}
					
			
							
	}                                                                                                                                                                                                                       
	getch();
}








/*output

enter the name of the student : 1
khushi
enter the age :17
enter the last degree :cs
enter the percentage :87
enter aadhar card number :123456789768
gender :f
enter the name of the student : 2
dev
enter the age :25
enter the last degree :ca
enter the percentage :78
enter aadhar card number :698767678968
gender :m
enter the name of the student : 3
jil
enter the age :9
enter the last degree :bsc
enter the percentage :89
enter aadhar card number :8769875986757
gender :f
enter the name of the student : 4
jay
enter the age :33
enter the last degree :mca
enter the percentage :95
enter aadhar card number :76579857657568
gender :m
enter the name of the student : 5
kavya
enter the age :29
enter the last degree :msc
enter the percentage :72
enter aadhar card number :7859874676467
gender :f
enter the name of the student : 6
jerry
enter the age :2
enter the last degree :jrkg
enter the percentage :45
enter aadhar card number :5694356879457
gender :m
number of female is : 3
number of male is : 3
a person whose age is greater than 20 : dev
a person whose age is greater than 20 : jay
a person whose age is greater than 20 : kavya

khushi got cs degree
jil got bsc degree
kavya got msc degree
a person whose persentage is more than 75: dev

a person whose persentage is more than 75: jay

female students : khushi
female students : jil
female students : kavya
*/








