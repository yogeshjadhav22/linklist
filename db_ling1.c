#include<stdio.h>
#include<stdlib.h>
#define Nodealloc (struct node *)malloc(sizeof(struct node))

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};

typedef struct node * nodeptr;

nodeptr create(nodeptr head)
{
	nodeptr p,current;
	int i,n;
	printf("\n enter the number of node");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=Nodealloc;
		p->next=NULL;
		scanf("%d",&p->data);
		if(head==NULL)
		{
			head=current=p;
			head->prev=NULL;
		}
		else
		{
			current->next=p;
			p->prev=current;
			current=p;
			
		}
		
	}
  return head;
}
nodeptr insertf(nodeptr head)
{
        nodeptr current,p;
	p=Nodealloc;
        printf("enter the number of elements");
        scanf("%d",&p->data);
        p->prev=NULL;
        p->next=head;
        head->prev=p;
        head=p;
        return head;

}
nodeptr insertl(nodeptr head)
{
		nodeptr p,current;
		p=Nodealloc;
		printf("enter the last number");
		scanf("%d",&p->data);
		for(current=head;current->next!=NULL;current=current->next);
	{
		p->next=NULL;
		current->next=p;
		p->prev=current;
		current=p;
	}
 	return head;
}

nodeptr insert(nodeptr head)
{
	nodeptr p,current;
	int pos,i;
	printf("enter the postion");
	scanf("%d",&pos);
	p=Nodealloc;
	printf("enter the data");
	scanf("%d",&p->data);
	for(i=1,current=head;i<pos-1 && current->next->next!=NULL;i++,current=current->next);
	{
		p->next=current->next;
		current->next->prev=p;
		p->prev=current;
		current->next=p;
		
	}
	return head;
}

void display(nodeptr head)
{
	nodeptr current;
	for(current=head;current!=NULL;current=current->next)
	{
		printf("%4d",current->data);
	}
}



int main()
{
	struct node *head=NULL;
	head=create(head);
//	head=insertf(head);
//	head=insertl(head);
	head=insert(head);
	 display(head);	
}
