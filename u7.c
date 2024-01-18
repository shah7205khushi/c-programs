#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
	
	printf("\nenter first matrix\n");
	printf("enter nine no\n");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\nenter no :");
			scanf("%d",(*(a+i)+j));
		}
	}



printf("\nenter second matrix\n");
printf("enter nine no\n");
	
for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\nenter no :");
			scanf("%d",(*(b+i)+j));
		}
	}
	
	
	
for(i=0;i<=2;i++)

	{
		for(j=0;j<=2;j++)
		{
			*(*(c+i)+j)=0;
			
			
			*(*(c+i)+j)= *(*(a+i)+j) + *(*(b+i)+j);
			
		
		
		}
	}
	
	
	printf("\nfirst matrix\n");
	 for(i=0;i<=2;i++)
	 {
	 	for(j=0;j<=2;j++)
	 	{
	 		printf("%5d",(*(*(a+i)+j)));
		 }
		 printf("\n");
	 }
	
	 printf("\nsecond matrix\n");
	 for(i=0;i<=2;i++)
	 {
	 	for(j=0;j<=2;j++)
	 	{
	 		printf("%5d",(*(*(b+i)+j)));
		 }
		 printf("\n");
	 }
	
	
printf("\nsummesion of matrix\n");	
for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		printf("%5d",*(*(c+i)+j));
		printf("\n");
	}
	getch();
}

/*output

enter first matrix
enter nine no

enter no :1

enter no :2

enter no :3

enter no :4

enter no :5

enter no :6

enter no :7

enter no :8

enter no :9

enter second matrix
enter nine no

enter no :1

enter no :2

enter no :3

enter no :4

enter no :5

enter no :6

enter no :7

enter no :8

enter no :9

first matrix
    1    2    3
    4    5    6
    7    8    9

second matrix
    1    2    3
    4    5    6
    7    8    9

summesion of matrix
    2    4    6
    8   10   12
   14   16   18

--------------------------------
Process exited after 24.83 seconds with return value 224
Press any key to continue . . .


*/
