#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

struct linklist
{
	int data;
	struct linklist *next;
	
};

typedef struct linklist node;

void main()
{
	node *head;
	node *addatbeg(node *,int);
	node *addatend(node *,int);
	void display(node *);
	node *delatbeg(node *);
	int choice,num;
	head = NULL;
	//clrscr();
	do
	{
		printf("\n1 for add at begining");
		printf("\n2 for display");
		printf("\n3 for add at end");
		printf("\n4 for delete at begining");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter no\n");
				scanf("%d",&num);
				head = addatbeg(head,num);
				break;
				
			case 2:
				printf("data entered till now :\n");
				display(head);
				break;
				
			case 3:
			    printf("enter no\n");
				scanf("%d",&num);
				head = addatend(head,num);
				break;
				
			case 4:
				head = delatbeg(head);
				break;	
					
					
		}
		
		
		
	}
	while(choice >= 1 && choice <=4);
	getch();
}

node * addatbeg(node *start,int num)
{
	node *tmp;
	tmp = (node *)malloc(sizeof(node));
	tmp->data = num;
	tmp->next = start;
	start = tmp;
	return(start);
}

node * addatend(node *head,int num)
{
	node * tmp,*start;
	start = head;
	tmp=(node *)malloc(sizeof(node));
	tmp->data=num;
	tmp->next = NULL;
	/*if(start == NULL)
	   start=tmp;
	else
	{
		cur = start;
		prev = cur;*/
		
		
		while(start->next != NULL)
		{
			start=start->next;
		}
	start->next=tmp;
	}
	//return(start);*/


void display(node * start)
{
	if(start == NULL)
	printf("list is empty");
	else
	{
		while(start != NULL)
		{
			printf("%4d",start->data);
			start = start->next;
		}
	}
}

node * delatbeg(node * start)
{
	node * tmp;
	if(start == NULL)
	printf("list is empty");
	else
	{
		tmp = start;
		start = start->next;
		printf("deleted data is %d\n",tmp->data);
		free(tmp);
	}
	return(start);
}

/*
1 for add at begining
2 for display
3 for add at end
4 for delete at begining1
enter no
6

1 for add at begining
2 for display
3 for add at end
4 for delete at begining1
enter no
5

1 for add at begining
2 for display
3 for add at end
4 for delete at begining1
enter no
8

1 for add at begining
2 for display
3 for add at end
4 for delete at begining2
   8   5   6
1 for add at begining
2 for display
3 for add at end
4 for delete at begining3
enter no
8

1 for add at begining
2 for display
3 for add at end
4 for delete at begining3
enter no
6

1 for add at begining
2 for display
3 for add at end
4 for delete at begining3
enter no
9

1 for add at begining
2 for display
3 for add at end
4 for delete at begining2
   8   5   6   8   6   9
1 for add at begining
2 for display
3 for add at end
4 for delete at begining4
deleted data is 8

1 for add at begining
2 for display
3 for add at end
4 for delete at begining2
   5   6   8   6   9
1 for add at begining
2 for display
3 for add at end
4 for delete at begining4
deleted data is 5

1 for add at begining
2 for display
3 for add at end
4 for delete at begining2
   6   8   6   9
1 for add at begining
2 for display
3 for add at end
4 for delete at begining

*/













































































