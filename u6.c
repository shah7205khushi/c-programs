#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],x,y,z;
	printf("enter first matrix");
	for(x=0;x<=2;x++)
	{
		for(y=0;y<=2;y++)
		{
		printf("\nenter number :");
		scanf("%d",&(*(*(a+x)+y)));	
		}
		
	}


	printf("\nenter second matrix");
	for(x=0;x<=2;x++)
	{
		for(y=0;y<=2;y++)
		{
		printf("\nenter number :");
		scanf("%d",&(*(*(b+x)+y)));	
		}
		
	}
	
	 for(x=0;x<=2;x++)
	 {
	 	for(y=0;y<=2;y++)
	 	{
	 		c[x][y]=0;
	 		for(z=0;z<=2;z++)
	 		{
	 			c[x][y] = c[x][y] + a[x][z] * b[z][y];
			 }
		 }
	 }
	 
	 
	
	 printf("\nfirst matrix\n");
	 for(x=0;x<=2;x++)
	 {
	 	for(y=0;y<=2;y++)
	 	{
	 		printf("%5d",(*(*(a+x)+y)));
		 }
		 printf("\n");
	 }
	
	 printf("\nsecond matrix\n");
	 for(x=0;x<=2;x++)
	 {
	 	for(y=0;y<=2;y++)
	 	{
	 		printf("%5d",(*(*(b+x)+y)));
		 }
		 printf("\n");
	 }
	
	
	 printf("\nMultiplication of matrix\n");
	 for(x=0;x<=2;x++)
	 {
	 	for(y=0;y<=2;y++)
	 	{
	 		printf("%5d",(*(*(c+x)+y)));
		 }
		 printf("\n");
	 }
	
	getch();
}

/*
enter first matrix
enter number :1

enter number :2

enter number :3

enter number :4

enter number :5

enter number :6

enter number :7

enter number :8

enter number :9

enter second matrix
enter number :9

enter number :8

enter number :6

enter number :7

enter number :5

enter number :3

enter number :4

enter number :3

enter number :2

first matrix
    1    2    3
    4    5    6
    7    8    9

second matrix
    9    8    6
    7    5    3
    4    3    2

third matrix
   35   27   18
   95   75   51
  155  123   84

*/























































































