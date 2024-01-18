//Write a function to read a file and count the no.of characters,spaces,new lines and no.of 
//words in a given text file.

#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fs;
	int nc,nw,nline,nwspc,i;
	char line[80];
	fs=fopen("k.txt","r");
	if(fs==NULL)
	{
		printf("file could not open\n");
		exit(1);
	}
	
	nc=0;
	nw=0;
	nline=0;
	nwspc=0;
	while(fgets(line,80,fs) != NULL)
	{
		printf("%s\n",line);
		for(i=0;line[i] !='\0';i++)
		{
			if(line[i]== ' '|| line[i]=='\n')
			{
				nw++;
				if(line[i]=='\n')
				nline++;
				if(line[i]==' ')
				nwspc++;
			}
			nc++;
		}
	}
	printf("no of lines are %d\n",nline);
	printf("no of words are %d\n",nw);
	printf("no of space are %d\n",nwspc);
	printf("no of char are %d\n",nc);
	
	getch();
}

/*
my name is khushi shah.

my name is khushi shah.

my name is khushi shah.

my name is khushi shah.

my name is khushi shah.
no of lines are 4
no of words are 24
no of space are 20
no of char are 119
*/
