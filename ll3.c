//insering/deletion at first position
//finding an element
//insering/deleting at selected place
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
enum boolean {t = 1, f =0};

void display(node *ptr)
{
	if(ptr==NULL)
	{
	
		printf("\n\nLinked List is Empty\n");
		return;
	}
	printf("\n\n\nData entered till now : \n");
	while(ptr != NULL)
	{
		printf("\nthe details are : %d %d\n",ptr->id,ptr->age);
		ptr = ptr->next;
	}
}
int search(node *ptr,int data)
{
	int count=0;
	if(ptr==NULL)
	{
	
		printf("\n\nLinked List is Empty\n");
		return -1;
	}
	while(ptr != NULL)
	{
		if(ptr->age == data)
			return count;
		else 
			count++;
		ptr = ptr->next;
	}
	if(ptr==NULL) return -1;
}
int validoption(int ch)
{
	if (ch == 'a' || ch == 'd' || ch == 'p' || ch =='s' || ch=='i' || ch=='D'|| ch=='I')
		return 1;
	else
		return 0;
}
node *insert(node *head,int id,int age,int pos)
{
	node *ptr=head,*nnode,*prev=head;
	int i=0;
	nnode = (node *)malloc(sizeof(node));
	nnode->id = id;
	nnode->age = age;
	if(pos == 0)
	{
		nnode->next = head;
		head=nnode;
	}else
	{
		for(i=0;i<pos;i++){
			prev=ptr;
			ptr = ptr->next;
		}
		nnode->next = prev->next;
		prev->next = nnode;
	}
	return(head);
}
node *delete_pos (node *head,int pos)
{
	node *ptr=head,*prev;
	int i;
	if(pos==0)
	{
		head = ptr->next;
		free(ptr);
	}else{
	
		for(i=0;i<pos;i++)
		{
			prev=ptr;
			ptr=ptr->next;
		}
		prev->next = ptr->next;
		free(ptr);
	}
	return(head);
}

node *insert_a_b_d(node *head,int data,int choice)
{
	node *ptr=head,*prev,*nnode;
	printf("%d %d",data,choice);
	nnode = (node *)malloc(sizeof(node));
	printf("\nEnter  new id and age :");
	scanf("%d",&nnode->id);
	scanf("%d",&nnode->age);
	nnode->next = NULL;
	if(choice == 1)
	{
		while(ptr!=NULL)
		{
			if(ptr->age == data)
			{
				nnode->next = ptr->next;
				ptr->next = nnode;
			}
			else{
				prev=ptr;
				ptr = ptr->next;	
			}
		}	
	}
	else
	{
		while(ptr!=NULL)
		{
			if(ptr->age == data)
			{
				prev->next = nnode;
				nnode->next = ptr;
			}
			else
			{
				prev=ptr;
				ptr = ptr->next;	
			}
		}
		
	}
	return(head);
}
main()
{
	int i =0,n,id,age,data,pos,status;
	char ch;
	node *current,*head=NULL,*prev,*ptr;
	printf("\nGive your option \n 'a'':adding a node in the begining\n'd':deleting the first node\n'p':printing the node \n 's' to search\n'x' for exit: ");
	printf("\n'i' : inserting at a specific location\n");
	ch =getch();
	do{
	switch(ch)
	{
		case 'a':
				current = (node*)malloc(sizeof(node));
				printf("\nEnter id : ");
				scanf("%d",&id) ;
				printf("\nEnter age : ");
				scanf("%d", &age);
				current->id = id;
				current->age = age;
				current->next = NULL;
				printf("\nvalue of i = %d",i);
				if (head==NULL) 
				{
					head= current;
				}
				else
				{
					current->next = head;
					head=current;
				}
				break;
		case 'd':
				ptr = head;
				if(ptr==NULL) 
				{
				printf("\nno element exists to be deleted\n");break;}
				if (ptr->next == NULL)
				{
					head = NULL;
					
				}
				else
				{
					head = ptr->next;
					free(ptr);
				}
				break;
		case 'p': display(head);
				break;
		case 's': 
				printf("\nenter the element to be searched : ");
				scanf("%d",&data);
				pos = search(head,data);
				if(pos ==-1)
					printf("\nno data found\n");
				else
					printf("\ndata found at position %d \n",pos);
				break;
		case 'i':
				printf("\nenter location where ");
				scanf("%d",&pos);
				printf("\nEnter data (id and age) :");
				scanf("%d %d",&id,&age);
				head = insert(head,id,age,pos);
				/*if(status == 1)
					printf("\nData entered successfully\n");
				else
					printf("\nData could not be entered \n");*/
				break;
		case 'D':
				printf("\nEnter position : ");
				scanf("%d",&pos);
				head = delete_pos(head,pos);
				break;
		case 'I':
				printf("\nEnter the data :");
				scanf("%d",&data);
				printf("\nenter location (a:after, b:before) : ");
				if(getch()=='a')
					head = insert_a_b_d(head,data,1);
				else
					head = insert_a_b_d(head,data,0);
				break;
	}
	
	printf("\nGive your option \n 'a'':adding a node\n'd':deleting the node\n'p':printing the node \n's' for search\n'x' for exit : ");
	printf("\n'i' : inserting at a specific location\n");
	ch =getch();
	i++;
	}while(validoption(ch));
}


/*output

Give your option
 'a'':adding a node in the begining
'd':deleting the first node
'p':printing the node
 's' to search
'x' for exit:
'i' : inserting at a specific location

Enter id : 1

Enter age : 11

value of i = 0
Give your option
 'a'':adding a node
'd':deleting the node
'p':printing the node
's' for search
'x' for exit :
'i' : inserting at a specific location

Enter id : 2

Enter age : 22

value of i = 1
Give your option
 'a'':adding a node
'd':deleting the node
'p':printing the node
's' for search
'x' for exit :
'i' : inserting at a specific location

Enter id : 3

Enter age : 33

value of i = 2
Give your option
 'a'':adding a node
'd':deleting the node
'p':printing the node
's' for search
'x' for exit :
'i' : inserting at a specific location

Enter id : 4

Enter age : 44

value of i = 3
Give your option
 'a'':adding a node
'd':deleting the node
'p':printing the node
's' for search
'x' for exit :
'i' : inserting at a specific location

Give your option
 'a'':adding a node
'd':deleting the node
'p':printing the node
's' for search
'x' for exit :
'i' : inserting at a specific location



Data entered till now :

the details are : 3 33

the details are : 2 22

the details are : 1 11

Give your option
 'a'':adding a node
'd':deleting the node
'p':printing the node
's' for search
'x' for exit :
'i' : inserting at a specific location

*/
