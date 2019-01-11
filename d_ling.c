#include<stdio.h>
#include<stdlib.h>
#define Nodealloc (struct node*)malloc(sizeof(struct node))

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
	printf("enter the limit of node");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=Nodealloc;
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
void di

int main()
{
	nodeptr head=NULL;
	nodeptr create(node)
	
}
