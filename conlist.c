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
		nodeptr current,p;
		printf("\n enter the node limit");
		scanf("%d",&n);
		printf("\n enter the node");
		for(i=0;i<n;i++)
		  {
			p=NODEALLOC;
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

	nodeptr concat(nodeptr head,nodeptr head1)
	  {
		nodeptr current;
		for(current=head;current!=NULL;current=current->next);
			{
				current->next=head1;
				return head1;
			}
	  }
	
	
	void display(nodeptr head)
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
			printf("\n %d",current->data);
		       }
		 }
	  }

	int main()
	 {
		nodeptr head1=NULL;
		nodeptr head2=NULL;
		nodeptr head=NULL;
		//nodeptr head2=NULL;
		head1=create(head1);
		display(head1);
		printf("\n 1st display link list");
		head2=create(head2);
		display(head2);
		printf("\n 2nd display link list");
		printf("\n concat list\n");
		head=concat(head1,head2);
		display(head);	
	 }
