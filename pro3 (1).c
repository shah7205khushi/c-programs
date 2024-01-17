#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		char stu_name[10];
		int age;
		char degree[30];
		float per;
		long int m_no;
		char scholarship[15];
		char gender;
	};
	
	
	
	struct student s[3];
	{
		int i,count=0,countm=0;
		for(i=0;i<3;i++)
		{
			printf("enter the name of the student : %d\n",i+1);
			scanf("%s",s[i].stu_name);
			
			printf("enter the age :");
			scanf("%d",&s[i].age);
			
			printf("enter the last degree :");
			scanf("%s",s[i].degree);
			
			printf("enter the percentage :");
			scanf("%f",&s[i].per);
			
			printf("enter Mobile number :");
			scanf("%d",&s[i].m_no);
			
			printf("scholarship:");
			scanf("%s",&s[i].scholarship);
			
			printf("gender :");
			scanf("%s",&s[i].gender);
			
			
}
for(i=0;i<3;i++)
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
        
        
        for(i=0;i<3;i++)
		{
			if(s[i].gender=='m'&& s[i].age>=20)
			{
				printf("\nstu_name:%s  \nage:%d  \ndegree:%s \ngender:%s \nper:%f  \nscholarship:%s  \nm_no:%d ",s[i].stu_name,s[i].age,s[i].degree,s[i].gender,s[i].per,s[i].scholarship,s[i].m_no);
			
			}
				}
		
}
getch();
}
