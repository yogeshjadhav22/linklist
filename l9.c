#include<stdio.h>
#include<stdlib.h>
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
		nodeptr current,p;
		int i,n;
		printf("\n enter the no limit of node");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		  {
			p=NODEALLOC;
			printf("\n enter the data:%d::",i+1);
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
	
	nodeptr display(nodeptr head)
	  {
		nodeptr current;
		int i;
		printf("\n display linked list is\n ");
		 if(head==NULL)
		  {
			printf("\n linked list is empty");
		  }
		else
		  {
			for(current=head;current!=NULL;current=current->next)
				{
					printf("%4d",current->data);
				}
		  }
	  }
	
	nodeptr display1(nodeptr head)
	  {
		nodeptr current;
		int i,pos;
		printf("\n enter the postion \n");
		scanf("%d",&pos);
		printf("\n display linked list is\n ");
		 if(head==NULL)
		  {
			printf("\n linked list is empty");
		  }
		else
		  {
			for(i=1,current=head;current!=NULL,i<pos;i++,current=current->next);
				{
					printf("%4d",current->data);
				}
		  }
	  }



int main()
{
	nodeptr head=NULL;
	head=create(head);
	display(head);
	display1(head);
}
