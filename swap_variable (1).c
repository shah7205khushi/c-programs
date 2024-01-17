#include<stdio.h>
#include<conio.h>
swap(int* p,int* q) 
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{

int a,b;


printf("enter two elements to be swapped :");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("swapped elements are : %d %d",a,b);
return 0;
}


/*output
enter two elements to be swapped :44
89
swapped elements are : 89 44
*/
