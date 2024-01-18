#include<stdio.h>
#include<conio.h>

struct product
{
	char name[15];
	int price;
	int contity;
}p;

int f1(struct product p)
{
	if(p.contity<5)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}


int f2(struct product p)
{
	int c;
	c=(p.price)*(p.contity);
	return c;
}
	
	
	int main()
	{
		int a,b;
		
		printf("enter product name :");
		scanf("%s",p.name);
		
		printf("enter price :");
		scanf("%d",&p.price);
		
		printf("enter quantity :");
		scanf("%d",&p.contity);
		
		a=f1(p);
		printf("%d",a);
		
		b=f2(p);
		printf("\n%d",b);
		
		return 0;
		
	}
	
	//output
	
/*	
enter price :67
enter quantity :4
0
268 

enter price :450
enter quantity :8
1
3600

enter product name :jar
enter price :200
enter quantity :6
1
1200

*/
