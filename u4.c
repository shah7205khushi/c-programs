#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char * name;
	int i,vw=0,co=0,nd=0,ws=0;
	clrscr();
	printf("enter string :");
	gets(name);


for(i=0;name[i]!='\0';i++)
{
	if(name[i] >= 'a' && name[i]<= 'z')
	{
		if(name[i]=='a' || name[i]=='e' || name[i]=='i'|| name[i]=='o'|| name[i]=='u')

			vw++;

		else

			co++;

	  }


      else if(name[i] >= '0'  && name[i]<='9')

		nd++;

	else if(name[i]==' ')

		ws++;


  }
	printf("\nno of vovels =%d",vw);
  printf("\nno of consonents =%d",co);
  printf("\nno of digit =%d",nd);
  printf("\nno of whitespace =%d",ws);

	getch();
}
/*
enter string :my password is k1234

no of vovels =3
no of consonents =10
no of digit =4
no of whitespace =3


   */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
