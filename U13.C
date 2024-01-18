#include<stdio.h>
#include<conio.h>
int scmp(char *p,char * q)
{
	int i,found=1;
	int ans;

	for(i=0;*(p+i)!='\0'&& *(q+i)!='\0';i++)
	{
	if(*(p+i) != *(q+i))
	{
	   found=0;
	   break;
	}
}
	if(found==1 && *(p+i)=='\0' && *(q+i)=='\0')
	ans=0;
	else if(*(p+i) > *(q+i))
	ans=1;
	else
	ans=-1;
	return(ans);
}
void main()
{
char *name, *aname;
int i;
clrscr();
printf("enter name");
scanf("%s %s",name,aname);

printf("the compared string is %d",scmp(name,aname));

getch();
}


/*output
enter name nitya
khushi
the compared string is 1


	*/














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
