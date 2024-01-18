/* C Program to find First Occurrence of a Character in a String */
 
#include <stdio.h>
#include <string.h>

int Find_FirstCharcater(char *str, char ch);

int main()
{
  	char str[100], ch;
  	int index;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	printf("\n Please Enter the Character that you want to Search for :  ");
  	scanf("%c", &ch);
  	
  	index = Find_FirstCharcater(str, ch); 
  	
    if(index == -1)
  	{
  		printf("\n Sorry!! We haven't found the Search Character '%c' ", ch);
	}
	else
	{
		printf("\n The First Occurrence of the Search Element '%c' is at Position %d ", ch, index + 1);
	}	
  	return 0;
}

int Find_FirstCharcater(char *str, char ch)
{
	int i;
	
	while(*str)
	{
		if(*str == ch)
		{
			return i;
		}
		i++;
		str++;  
	}
	return -1;
}

/*

Please Enter any String :  you are invited at my birthdayparty.

 Please Enter the Character that you want to Search for :  g

 Sorry!! We haven't found the Search Character 'g'
--------------------------------
 Please Enter any String :  programming examples

 Please Enter the Character that you want to Search for :  a

 The First Occurrence of the Search Element 'a' is at Position 6 
 
 

*/
