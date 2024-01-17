#include<stdio.h>
int main()
{
	char string[30],*str;
	printf("hello world");
	printf("\nenter a string :");
	gets(string);
	puts(string);
	str=string;
	while(*str!='\0')
	{
		printf("%c",*str);
		str++;
	}
	return 0;
}

/*output
hello world
enter a string :khushi
khushi
khushi
*/
