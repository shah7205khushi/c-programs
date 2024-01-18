#include<stdio.h>
#include<conio.h>
void main()
{
	char * name,*aname;
	int i;
	
	printf("enter name:\n");
	scanf("%s",name);
	
	printf("enter another name\n:");
	scanf("%s",aname);
	
	for(i=0;*(name+i)!='\0';i++)
	{
		*(aname+i) = *(name+i);
	}
	
	*(aname+i) = '\0';
	printf("%s %s\n",name,aname);
	getch();
}

/* 
enter name : khushi
enter another name:jil
khushi khushi
*/
