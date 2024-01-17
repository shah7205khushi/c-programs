#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct linked_list
{
	int id;
	int age;
	struct linked_list *next;
};

typedef struct linked_list node;

int main()
{
	int i =0,n,id,age;
	char ch;
	node *current,*head,*prev;
//	head = (node*)malloc(sizeof(node));
//	prev = (node*)malloc(sizeof(node));
	printf("\nEnter total number of student : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		current = (node*)malloc(sizeof(node));
		printf("Enter the data : ");
		printf("\nEnter id : ");
		scanf("%d",&(current->id)) ;
		printf("\nEnter age : ");
		scanf("%d", &(current->age));
//		current->id = id;
//		current->age = age;
		current->next = NULL;
		if (i==0) 
		{
			head= current;
			prev=current;
		}
		else
		{
			prev->next=current;
			prev=current;
		}
	}
	current = head;
	while(current != NULL)
	{
		printf("\nthe details are : %d %d",current->id,current->age);
		current = current->next;
	}

}

/*
output

Enter total number of student : 3
Enter the data :
Enter id : 1

Enter age : 45
Enter the data :
Enter id : 3

Enter age : 56
Enter the data :
Enter id : 3

Enter age : 77

the details are : 1 45
the details are : 3 56
the details are : 3 77

*/
