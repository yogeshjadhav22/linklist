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
		int i,n;
		nodeptr p,current;
		printf("\n enter the node");
		scanf("%d",&n);
		
		//p->next=NULL;
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
	void display(nodeptr head)
	  {
		nodeptr current;
		if(head==NULL)
		  {
			printf("\n linked list empty");
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
		nodeptr head=NULL;
		head=create(head);
		display(head);
	  }
