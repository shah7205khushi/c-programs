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
		int i,count=0,countm=0;
		for(i=0;i<=2;i++)
		{
			
			printf("enter student name :");
			scanf("%s",s[i].stu_name);
			
			printf("enter student age :");
			scanf("%d",&s[i].age);
			
			printf("enter student last degree :");
			scanf("%s",s[i].last_degree);
			
			printf("enter student persentage :");
			scanf("%f",&s[i].per);
			
			printf("enter student gender :");
			scanf("%s",s[i].gender);
			
			printf("enter student aadhar number :");
			scanf("%ld",&s[i].aadhar);
			
			
		}
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


/*

enter student name :khushi
enter student age :67
enter student last degree :bcom
enter student persentage :67
enter student gender :female
enter student aadhar number :123456789123
enter student name :jil
enter student age :12
enter student last degree :bsc
enter student persentage :89
enter student gender :male
enter student aadhar number :987654321345
enter student name :kavya
enter student age :56
enter student last degree :msc
enter student persentage :23
enter student gender :female
enter student aadhar number :123456789875
enter student name :aagam
enter student age :87
enter student last degree :bca
enter student persentage :56
enter student gender :male
enter student aadhar number :123456789765
enter student name :diya
enter student age :76
enter student last degree :mca
enter student persentage :78
enter student gender :female
enter student aadhar number :123456789765
enter student name :mohan
enter student age :14
enter student last degree :mcom
enter student persentage :47
enter student gender :male
enter student aadhar number :1244345465756

number of female is : 3
number of male is : 3
name of the students whose age is more than 20 : khushi

name of the students whose age is more than 20 : kavya

name of the students whose age is more than 20 : aagam

name of the students whose age is more than 20 : diya

khushi got bcom degree

kavya got msc degree

diya got mca degree

students whose persentage is more than 75 : jil

*/












































































































