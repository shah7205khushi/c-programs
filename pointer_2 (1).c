#include<stdio.h>
#include<conio.h>
int* max(int*,int*);
int main()
{
	int a=20,b=10;
	int* p;
	p=max(&a,&b);
	printf("maximum is %d", *p);
	
}
int* max(int* x,int* y)
{
	if(*x > *y)
	return(x);
	else
	return(y);
}
/*output
maximum is 20
*/
