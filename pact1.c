#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node *)malloc(sizeof(struct node))

struct node
{
	int data;
	struct node * next;
};
	
typedef struct node * nodeptr;
	

	nodeptr create(nodeptr head)
	  {
		int i,n;
		nodeptr p,current;
		printf("\n enter the number node ");
		scanf("%d",&n);
	
		for(i=0;i<n;i++)
		  {
		printf("\n enter the data::%d=",i+1);
			p=NODEALLOC;
		  scanf("%d",&p->data);
			if(head==NULL)
			  {
				head=current=p;				
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
	int main()
	 {
		nodeptr head=NULL;
		head=create(head);
		printf("\n display linked list.\n");
		display(head); 
	 }
