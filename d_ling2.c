//circular linked list 
#include<stdio.h>
#include<stdlib.h>
#define Nodealloc (struct node *)malloc(sizeof(struct node))
struct node
{
	int data;
	struct node *next;
};
typedef struct node * nodeptr;

nodeptr create(nodeptr head)
{
	nodeptr p,current;
	int i,n;
	printf("enter the number of elements ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=Nodealloc;
		int num;
		scanf("%d",&p->data);
		
		if(head==NULL)
		{
		  head=current=p;
		  p->next=head;
		 
		}
		else
		{
			current->next=p;
			p->next=head;
			current=p;
			
		}
	}
    return head;
	
}
nodeptr insertf(nodeptr head)
{
        nodeptr p,current;
	int num;
        printf("\n enter the number");
        scanf("%d",&num);
	p->data=num;
	
        for(current=head;current->next!=head;current=current->next);
        {
		printf("check out%d",current->data);
	
                current->next=p;
                p->next=head;
                head=p;
	}
		//current->next=head;
        
        return head;
	
}


void display(nodeptr head)
{
    nodeptr current,pt;
	
	printf("%d",head->data);
	for(current=head->next;current!=head;current=current->next)
	{
		printf("%4d",current->data);		
	}
	

/*		current=head;
	
	while(current->next!=head)
	{
		printf("%4d",current->data);
		current=current->next;
	}
*/
}


int main()
{
	nodeptr head=NULL;
	head=create(head);
	head=insertf(head);
	display(head);
}
