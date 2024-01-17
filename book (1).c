#include<stdio.h>
#include<conio.h>
void main()
{
	struct book
	{
		char name[50];
		int pages;
		float price;
	};
	
	struct book b1,b2,b3;
	
	printf("\nenter name,pages and price of three books\n");
	scanf("%s%i%f",&b1.name,&b1.pages,&b1.price);
	scanf("%s%i%f",&b2.name,&b2.pages,&b2.price);
	scanf("%s%i%f",&b3.name,&b3.pages,&b3.price);
	printf("\n\t.name\t.pages\t.price\n");
	printf("\n\t%s\t%i\t%.2f",b1.name,b1.pages,b1.price);
    printf("\n\t%s\t%i\t%.2f",b2.name,b2.pages,b2.price);
	printf("\n\t%s\t%i\t%.2f",b3.name,b3.pages,b3.price);	
	getch();
}
/*output
enter name,pages and price of three books
stat
875
456
english
567
987
hindi
765
987

        .name   .pages  .price

        stat    875     456.00
        english 567     987.00
        hindi   765     987.00
*/


