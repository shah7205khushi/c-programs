#include<stdio.h>
int checkhighest(int *m,int size)
{
	int i=0,max=0;
	while(i<size)
	{
		printf("\nin function : %d",*m);
		if(*m>max)
		{
			max=*m;
			m++;i++;
		}
	}
	return max;
}
int main()
{
	int a,b,marks[3];
	for(a=0;a<3;a++)
	{
		printf("enter marks :");
		scanf("%d",&marks[a]);
	}
	printf("\nthe highest marks are : %d",checkhighest(marks,3));
	return 0;
}

/*output
enter marks :12
enter marks :43
enter marks :56

in function : 12
in function : 43
in function : 56
the highest marks are : 56
*/
