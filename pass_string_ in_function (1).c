#include<stdio.h>
int getlength(char[]);

int getlength(char str[])
{
	int i,length=0;
	for(i=0;str[i]!='\0';i++)
	length++;
	return length;
}
int main()
{
	char s[50];
	printf("enter any string :");
	gets(s);
	printf(" the length of string is %d",getlength(s));
	return 0;
}


/*output
enter any string :khushi
 the length of string is 6
*/
