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
	printf("\n enetr the number of node");
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
void display(nodeptr head)
{
	nodeptr current;
	
	for(current=head;current!=NULL;current=current->next)
	{
		printf("%4d",current->data);
	}
}

nodeptr intersec(nodeptr head,nodeptr head1)
{
	nodeptr current,pt;
	int i,n;
	printf("\n enter the intersection points");
	scanf("%d",&n);
	current=head;
	for(i=0;i<n-1;i++)
	{
		current=current->next;
	}
	
	for(pt=head1;pt->next!=NULL;pt=pt->next);
	{
		pt->next=current;
		pt=current;		
	}
	//inter_point(head,head1);
	return head1;
}
nodeptr inter_point(nodeptr head,nodeptr head1)
{
		nodeptr current,pt1,pt2;
		int i,c1=0,c2=0,p;
		for(current=head;current!=NULL;current=current->next)
		{
//			printf("%d",current->data);
			c1=c1+1;
		}
		for(current=head1;current!=NULL;current=current->next)
		{
		
//			 printf("%d",current->data);

			c2=c2+1;
		}
//		printf("\n first list%d",c1);
//		printf("\n second list%d",c2);
		if(c1>c2)
		{
			p=c1-c2;
		}
		else
		{
			p=c2-c1;
		}
		pt1=head1;
		pt2=head;
//		printf("\n diff%d",p);
		for(i=0;i<p;i++)
		{
			pt1=pt1->next;
		}
		//printf("%d",pt1->data);
		while(pt1!=pt2)
		{
			pt1=pt1->next;
			pt2=pt2->next;	
		}
//		printf("\nc1:%d",pt1->data);
//		printf("\nc2:%d",pt2->data);
		printf("\n inter section point is %d",pt1->data);
	
}

int main()
{
	nodeptr head=NULL;
	nodeptr head1=NULL;
	head=create(head);
	display(head);
	head1=create(head1);
	printf("\n");
	display(head1);
	head1=intersec(head,head1);
	printf("\n display the intersection linked list");
	display(head1);
	inter_point(head,head1);

}
