#include<stdio.h>
#include<conio.h>
#include<conio.h>
#include<string.h>

struct linked_list
{
	int id;
	char name[20];
	int age;
	struct linked_list * next;
	
};

typedef struct linked_list node;
int main()
{
	node *node1,*node2,*node3;
	node1 = (node*)malloc(sizeof(node));
	node2 = (node*)malloc(sizeof(node));
	node3 = (node*)malloc(sizeof(node));
	
	
	node1->id=1;
	strcpy(node1->name,"khushi");
	node1->age =20;
	
	node1->next=NULL;
	
	node2->id=2;
	strcpy(node2->name,"jil");
	node2->age =21;
	
	node1->next=node2;
	node2->next=NULL;
	
	node3->id=3;
	strcpy(node3->name,"Kavya");
	node3->age =22;
	
	node2->next=node3;
	node3->next=NULL;
	
	printf("\nthe details are : %d %s %d",node1->id,node1->name,node1->age);
	node1=node1->next;
	
	printf("\nthe details are : %d %s %d",node1->id,node1->name,node1->age);
	node1=node1->next;
	
	printf("\nthe details are : %d %s %d",node1->id,node1->name,node1->age);
	node1=node1->next;
	
	
	
}



/*

output


the details are : 1 khushi 20
the details are : 2 jil 21
the details are : 3 Kavya 22

*/

