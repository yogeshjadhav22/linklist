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
		printf("\n enter the limit  of number");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		  {	
			p=NODEALLOC;
			printf("\n enter the data:");
			scanf("%d",&p->data);
			if(head==NULL)
			  {
				current=p=head;
			  }
			 else
			  {
				current->next=p;
				current=p;
			  }
		  }
	}
     void display()
	{	
		nodeptr head;
		/*printf("\n checker\n");
		nodeptr current;
		if(head==NULL)
		 {
			printf("\n linked list is empty");
		 }
		else
		 {
			for(current=0;current!=NULL;current=current->next)
			  {
				printf("%d",current->data);
			  }
			 }*/
		while(head!=NULL)
		 {
			printf("data is:%4d",head->data);
			head=head->next;
		 }	
	}



	
	int main()
	  {
		nodeptr head=NULL;
		head=create(head);
		display();
	  }
