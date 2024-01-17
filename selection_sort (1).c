#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,min,swap;
	
		printf("\nenter a number of element in the array:");
		scanf("%d",&n);
		int a[n];
		
		printf("enter the elements:\n");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
{
	min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		min=j;
	}
	if(min!=i)
	{
		swap=a[i];
		a[i]=a[min];
		a[min]=swap;
	}
	}	
	printf("the sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	getch();
	}
	
/*output	
	enter a number of element in the array:4
enter the elements:
8
45
87
66
the sorted array:
8       45      66      87
*/
	
