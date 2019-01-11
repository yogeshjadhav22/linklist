#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node *)malloc(sizeof(struct node))
struct node
{
	int data;
	struct node *next;
};
typedef struct node * nodeptr;

  	nodeptr create(nodeptr head)
		{
			int n,i;
			nodeptr p,current;
			printf("\n enter the limit of node");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				p=NODEALLOC;
				printf("\n enter the data");
				scanf("%d",&p->data);
				if(head==NULL)
				  {
					current=head=p;
				  }
				else
				  {
					current->next=p;
					current=p;
				  }
			}
			return head;
		}
	
	nodeptr concat(nodeptr  head1,nodeptr head2)
	  {
		nodeptr current,head;
		for(current=head1;current->next!=NULL;current=current->next)
		  {
			head2=current->next;
			
			
		  }
	  }
	
	void display(nodeptr head)
	  {
		nodeptr current;
		if(head==NULL)
		  {
			printf("\n liked list is empty");
			exit(0);
		  }
		else
		  {
			for(current=head;current!=NULL;current=current->next)
			  {
				printf("%4d",current->data);
			  }
		  }
	  }
	
	int main()
	  {
		nodeptr head1=NULL,head2=NULL,head=NULL;
		printf("\n enter the 1st linked list..");
		head1=create(head1);
		
		printf("\n enter the 2nd linked list");
		head2=create(head2);
		printf("\n display the linked list\n");
		display(head1);
		printf("\n display the 2nd linked list\n");
		display(head2);
		printf("\n concat linked list");
		head=concat(head1,head2);
		display(head);
		
		
	  }
