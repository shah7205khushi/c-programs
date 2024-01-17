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
void display(node *ptr)
{
	if(ptr==null)
	{
		printf("\n\nlinked list is empty\n");
		return;
	}
	printf("\n\ndata entered till now :\n");
	while(ptr != NULL)
	{
		printf("\nthe details are : %d %d\n",ptr->id,ptr->age;)
		ptr=ptr->next;
	}
}
main()
{
	int i=0,n,id,age;
	char ch;
	node *current, *head=NULL, *prev, *ptr;
	printf("\ngive your option \n 'a' : adding a node\n'd' : deleting the node\n 'p' : printing the node\n 'x' for exit :");
    ch=getch();
    do{
    	switch(ch)
    	{
    		case 'a' :
    			
    			current=(node*)malloc(sizeof(node));
    			printf("enter id :");
    			scanf("%d",&id);
    			printf("enter age");
    			scanf("%d",&age);
    			
    			current->id=id;
    			current->age=age;
    			current->next=null;
    			printf("\nvalue of i = %d",i);
    			if(head==null)
    			{
    				head=current;
    				prev=current;
				}
				else
				{
					prev->next=current;
					prev=current;
					
				}
				break;
				
				case 'd':
					
					ptr=head;
					if(ptr==null)
					{
						printf("\nno element exists to be deleted\n");break;
						if(ptr->next==null)
						{
							head=null;
						}
						while(ptr->next !=NULL)
					}
		}
	}

}
