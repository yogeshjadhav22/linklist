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
	int n,i;
	printf("\n enter the number node");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=Nodealloc;
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

nodeptr l_loop(nodeptr head,int num)
{
	nodeptr p,current;
	int i,count=0;
	for(i=0,p=head;i<num-1 && p->next!=NULL;i++,p=p->next);
	  {
		printf("\ncheck a p::%d",p->data);
	  }
	for(current=head;current->next!=NULL;current=current->next);
	{
		current->next=p;
	}
	
	return head;
}
void check_loop(nodeptr head)
{
	nodeptr p,current;
	current=head->next;
	p=head;

	while(p!=NULL)
	{
		if(p==current)
		{
			printf("a given linked list loop occuer");
			break;
			
		}
		else
		{
			p=p->next;
			current=current->next->next;
		}
	}
}	

void loop_st(nodeptr head)
{
	nodeptr a,b,c;
	c=head;
	a=head->next;
	b=head->next->next;
	while(c!=b || c!=a)
	{
		if(a==b)
		{
			c=c->next;
			a=a->next;
			b=b->next->next;
		}
		else
		{
			a=a->next;
			b=b->next->next;
		}
	}
	printf("\n start loop this postion %d",c->data);
	
}

void display(nodeptr head)
{
	nodeptr current;
	if(head==NULL)
	{
		printf("\n linked list is empty...");
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
	int num;
	nodeptr head=NULL;
	head=create(head);
	display(head);
	printf("\n enter the number of postion of loop");
	scanf("%d",&num);
	head=l_loop(head,num);
//	display(head);
	check_loop(head);
	loop_st(head);

}

