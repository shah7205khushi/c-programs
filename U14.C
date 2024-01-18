#include<stdio.h>
#include<conio.h>
#include<string.h>
int scmp(char *p,char * q,int n)
{
	int i,found=1;
	int ans;
   for(i=0;i<n;i++)
   {

	if(*(p+i) != *(q+i))
	{
	  found=0;
	  break;
	}
   }
if(found==1)
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
int i,n;
clrscr();
printf("enter name");
scanf("%s %s",name,aname);

printf("enter no of character to be compared");
scanf("%d",&n);

printf("the compared string is %d",scmp(name,aname,n));

if(scmp(name,aname,n)==0)
printf("\n(equal)");
else if(scmp(name,aname,n)>0)
printf("(higher)");
else
printf("(lower)");
getch();
}

/*output
enter name jalpa
khushi                                                                          
enter no of character to be compared5                                           
the compared string is -1(lower)

enter name jil
jil                                                                             
enter no of character to be compared3                                           
the compared string is 0                                                        
(equal)                                                                         
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                













                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
