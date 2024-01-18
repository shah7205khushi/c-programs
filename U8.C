#include<stdio.h>
#include<conio.h>
void main()
{
  char * name[5];
  char * sort;
  int i,j;
  clrscr();


  printf("\nenter string :\n");

  for(i=0;i<=4;i++)

    gets(name[i]);


  for(i=0;i<=3;i++)
  {
  for(j=i+1;j<=4;j++)
  {
	if(strcmp(name[i],name[j]) > 0)
	{
	strcpy(sort,name[i]);
	strcpy(name[i],name[j]);
	strcpy(name[j],sort);
	}
     }

  }

  printf("\nsorted strings are :\n");
  for (i=0;i<=4;i++)

  puts(name[i]);

  getch();
  }

  /*

enter string :
jil
prachi
khushi
kavya
dhurvi

sorted strings are :
dhurvi
jil
kavya
khushi
prachi

*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
