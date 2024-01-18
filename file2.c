#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f1,*f2,*f3;
	int num;
	clrscr();
	f1=fopen("data1.txt","w");
	if(f1==NULL)
	{
		printf("file could not open\n");
		exit (1);
	}
	
	f2=fopen("data2.txt","w");
	if(f2==NULL)
	{
		printf("file could not open\n");
		exit(1);
	}
	
	for(num=2;num<=10;num=num+2)
	putw(num,f1);
	fclose(f1);
	
	for(num=1;num<=9;num=num+2)
	putw(num,f2);
	fclose(f2);
	
	f1=fopen("data1.txt","r");
	if(f1==NULL)
	{
		printf("file could not open\n");
		exit(1);
	}
	
	f2=fopen("data2.txt","r");
	if(f2==NULL)
	{
		printf("file could not open\n");
		exit(1);
	}
	
	f3=fopen("merge.txt","w");
	if(f3==NULL)
	{
		printf("file could not open\n");
		exit(1);
	}
	while((num=getw(f1))!= EOF)
	putw(num,f3);
	
	while((num=getw(f2))!= EOF)
	putw(num,f3);
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
	
	f3 =fopen("merge.txt","r");
	if(f3==NULL)
	{
		printf("file could not open\n");
		exit(1);
		
	}
	
	while((num=getw(f3))!= EOF)
	printf("%4d",num);
	fclose(f3);
	getch();
	
}
