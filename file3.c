#include<stdio.h>
void main()
{
	FILE *fs, *fd;
	char ch;
	fs = fopen("k.txt","r");
	if(fs==NULL)
	{
		printf("FILE could not open\n");
		exit(1);
	}
	
	fd=fopen("dk.txt","w");
	if(fd==NULL)
	{
		printf("FILE could not open\n");
		exit(1);
	}
	
	while((ch=getc(fs)) != EOF)
	putc(ch,fd);
	
	fclose(fs);
	fclose(fd);
	
	printf("content of alternate character\n");
	fs = fopen("dk.txt","r");
	
	if(fs==NULL)
	{
		printf("FILE could not open\n");
		exit(1);
	}
	
	while((ch=getc(fs)) != EOF)
	printf("%c",ch);
	fclose(fs);
	getch();
	
}
