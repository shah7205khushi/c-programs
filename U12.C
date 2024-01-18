#include<stdio.h>
#include<conio.h>
char * srev(char *ptr)
{
	char *rev;
	int i,j;
	for(i=0,j=(strlen(ptr)-1);j>=0;i++,j--)
	*(rev+i)= *(ptr+j);
	*(rev+i)='\0';
	return(rev);
}

void main()
{
	char str[40];
	clrscr();
	printf("enter string :");
	gets(str);
	printf("the  reversed string is :%s",srev(str));
	getch();
}

/*
enter string :jil
the  reversed string is :lij

enter string :my name is khushi
the  reversed string is :ihsuhk si eman ym








                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
