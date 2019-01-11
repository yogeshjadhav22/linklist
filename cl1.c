#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node *)malloc(sizeof (struct node))

struct node 
{
	int data;
	struct node *next;

};

typedef struct node* nodeptr;

nodeptr create(nodeptr head)
 {
	nodeptr p,current;
	int i,n;
	printf("\n enter the limit of node");
	scanf("%d",&n);
	p=NODEALLOC;
	printf("\n enter the data");
	for(i=0;i<n;i++)
	 {
		scanf("%d",&p->data);
		
	 } 
 }

int display(nodeptr head)
{
	
}

int main()
{
	nodeptr head=NULL;
	head=create(head);
	display(head);
}
