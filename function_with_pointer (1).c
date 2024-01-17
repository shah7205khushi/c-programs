#include<stdio.h>
update(int* list,int value,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		*list+=value;
		list++;
	}
}
main()
{
int i,array[5]={1,2,3,4,5};
update(array,10,5);
for(i=0;i<5;i++)
{
	printf("\nafter updating the array is :%d",array[i]);
		}	
}

/*output
after updating the array is :11
after updating the array is :12
after updating the array is :13
after updating the array is :14
after updating the array is :15
*/
