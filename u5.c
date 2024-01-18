#include<stdio.h>
#include<conio.h>
void main()
{
	int m[2][3],i,j;
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter no\n");
			scanf("%d",(*(m+i)+j));
		}
	}
	
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		
			
			
			printf("%d\t",*(*(m+i)+j));
			printf("\n");
			
	     	
		
	}
	
	printf("transpose of metrix\n");
	
	for(j=0;j<=2;j++)
	{
		for(i=0;i<=1;i++)
		
			
			
			printf("%4d\t",*(*(m+i)+j));
			printf("\n");
	
	
}
getch();
}

/*
enter no
1
enter no
2
enter no
3
enter no
4
enter no
5
enter no
6
1       2       3
4       5       6
transpose of metrix
   1       4
   2       5
   3       6

*/





