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
		printf("\n enter the limit of number");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		  {
			p=NODEALLOC;
			p->next=NULL;
			printf("\n enter the data.");
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
	
	nodeptr finsert(nodeptr head, int num1)
	 {
		nodeptr p;
		p=NODEALLOC;
		p->data=num1;
		p->next=head;
		head=p;
		return head;
	 }
	
	nodeptr einsert(nodeptr head,int num2)
	  {
		//check this code
		nodeptr p,current;
		p=NODEALLOC;
		p->data=num2;
		p->next=NULL;
		for(current=head;current->next!=NULL;current=current->next)
	  	  {
			current->next=p;
			return head;
			
	 	  }
		
	  }

	void display(nodeptr head)
	  {
		nodeptr current;
		if(head==NULL)
		  {
			printf("\n linked list is empty..");
			exit(0);

		  }
		else
		  {
			printf("\nlinked list is::\n");
			for(current=head;current!=NULL;current=current->next)
			  {
				printf("%4d",current->data);
			  }
			printf("\n");
		  }
	  }
	
	nodeptr insertb(nodeptr head,int pos,int num)
	  {
		int i;
		nodeptr current,p;
		p=NODEALLOC;
		p->data=num;
	 	for(i=1,current=head;i<pos-1 && current!=NULL;i++,current=current->next);
		  {
			p->next=current->next;
			current->next=p;
			
		  }
		return head;
	  }

	
	int main()
	  {
		nodeptr head=NULL;
		head=create(head);
		display(head);
		printf("\n insert fist postion");
		head=finsert(head,10);
		display(head);
		printf("\n insert into end postion\n");
		einsert(head,50);
		display(head);
		printf("\nlinked list between\n");
		head=insertb(head,3,100);
		display(head);

	  }
