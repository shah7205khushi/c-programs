#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int i,*p,*q,temp;
	clrscr();

	printf("\nenter 5 elements :\n");
	for(i=0;i<=4;i++)
	scanf("%d",(a+i));

	for(p=a;p<=&a[3];p++)
	{
	for(q=p+1;q<=&a[4];q++)
	{

	if((*p) > (*q))
	{

	temp = *p;
	*p = *q;
	*q = temp;
	}
    }

}
printf("\nthe sorted numbers are :\n");
for(i=0;i<=4;i++)
printf("%4d",*(a+i));
getch();
}

/*

enter 5 elements :
65
98
78
83
54

the sorted numbers are :
  54  65  78  83  98

  */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
