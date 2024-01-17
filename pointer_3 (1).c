#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int* p=a;
	while(p<a+5)
	{
		printf("%d\t",*p);
		p++;
	}
}

/*output

1       2       3       4       5
*/
