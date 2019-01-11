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
		printf("\n enter the limit of node");
		scanf("%d",&n);
		printf("\n enter the data");
		for(i=0;i<n;i++)
		  {
			p=NODEALLOC;
			scanf("%d",&p->data);
			if(head=NULL)
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
	
int main()
   {
	nodeptr head=NULL;
	head=create(head);
   }
