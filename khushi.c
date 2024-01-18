#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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
	void display(node *);
    node *addatend(node *,int);
	node *delatbeg(node *);
	int i,choice,num;
	head = NULL;
	
	do
	{
		printf("\npress 1 for add the node at beginning\n");
		printf("\npress 2 for printing the node\n");
		printf("\npress 3 for add the node at end\n");
		printf("\npress 4 for delete the node at beginning\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nenter no :");
				scanf("%d",&num);
				head = addatbeg(head,num);
				break;
				
			case 2:
				printf("data entered till now :\n");
				display(head);
				break;
				
			case 3:
				printf("\nenter no :");
				scanf("%d",&num);
				head = addatend(head,num);
				break;	
				
			case 4:
				head = delatbeg(head);
				break;	
					
		}
		
		
	}
	
	while(choice>=1 && choice<=4);
		getch();
	
}

node * addatbeg(node *start,int num)
{
	node * tmp;
	tmp = (node *)malloc(sizeof(node));
	tmp->data=num;
	tmp->next=start;
	start=tmp;
	return(start);
}

void display(node * start)
{
	if(start == NULL)
	{
		printf("link list is empty\n");
	}
	else
	{
		while(start != NULL)
		{
			printf("%4d",start->data);
			start=start->next;
		}
	}
}

node * delatbeg(node * start)
{
	node *tmp;
	if(start == NULL)
	{
		printf("link list is empty\n");
	}
	else
	{
		tmp=start;
		start=start->next;
		printf("the deleted data is %d\n",tmp->data);
		free(tmp);
		
	}
	return(start);
}

node * addatend(node *start,int num)
{
	node *tmp,*prv,*cur;
	tmp = (node *)malloc(sizeof(node));
	tmp->data=num;
	tmp->next=NULL;
	if(start == NULL)
	{
		start=tmp;
	}
	else
	{
		cur=start;
		prv=cur;
		while(cur != NULL)
		{
			prv=cur;
			cur=cur->next;
		}
		prv->next=tmp;
	}
	return(start);
}

/*
press 1 for add the node at beginning

press 2 for printing the node

press 3 for add the node at end

press 4 for delete the node at beginning
1

enter no :6

press 1 for add the node at beginning

press 2 for printing the node

press 3 for add the node at end

press 4 for delete the node at beginning
1

enter no :8

press 1 for add the node at beginning

press 2 for printing the node

press 3 for add the node at end

press 4 for delete the node at beginning
2
data entered till now :
   8   6
press 1 for add the node at beginning

press 2 for printing the node

press 3 for add the node at end

press 4 for delete the node at beginning
3

enter no :9

press 1 for add the node at beginning

press 2 for printing the node

press 3 for add the node at end

press 4 for delete the node at beginning
3

enter no :55

press 1 for add the node at beginning

press 2 for printing the node

press 3 for add the node at end

press 4 for delete the node at beginning
2
data entered till now :
   8   6   9  55
press 1 for add the node at beginning

press 2 for printing the node

press 3 for add the node at end

press 4 for delete the node at beginning
4
the deleted data is 8

press 1 for add the node at beginning

press 2 for printing the node

press 3 for add the node at end

press 4 for delete the node at beginning
2
data entered till now :
   6   9  55
press 1 for add the node at beginning

press 2 for printing the node

press 3 for add the node at end

press 4 for delete the node at beginning


*/
