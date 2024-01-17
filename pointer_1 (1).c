#include<stdio.h>
#include<conio.h>
void square(int* p,int* q,float* r)
{
	*p=*p * *p;
    *q=*q * *q;
	*r=*r * *r;	
}
float sum(int p,int q,float r)
{
	return(p+q+r);
}
int main()
{
	int a=2,b=4;
	float c=6.5,total;
	
	total=sum(a,b,c);
	square(&a,&b,&c);
	printf("square of the number are : %d %d %f",a,b,c);
	getch();
}
/*output
square of the number are : 4 16 42.250000
*/
