#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],n,i,k,temp,j;
	
	printf("enter the size of array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter elements :");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(k=0;k<n-1;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[j]);
	}
	getch();
}

/*output

enter the size of array : 7
enter elements :6
enter elements :9
enter elements :55
enter elements :3
enter elements :7
enter elements :56
enter elements :98
3       6       7       9       55      56      98
*/

