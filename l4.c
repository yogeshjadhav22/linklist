//define linked list delete elements any postion
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
		printf("\n enter the number of limit ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		  {
			p=NODEALLOC;
			p->next=NULL;
			printf("\n enter the data:");
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
	/*nodeptr deletef(nodeptr head)
	  {
		nodeptr p;
		p=head;
		free(p);
		head=head->next;
		
		
		return head;
	  }*/

	nodeptr deletef(nodeptr head,int pos)
	  {	
		int i;
		nodeptr current,p;
		if(pos==1)
		  {

			p=head;
			head=head->next;
			free(p);
			
		  }
		else
		  {
		    for(i=1,current=head;i<pos-1 && current!=NULL;i++,current=current->next);
			{
				p=current->next;
				current->next=p->next;
				free(p);
			}
			return head;
	 	  }
	  }





	void display(nodeptr head)
   	  {
		nodeptr current;
		if(head==NULL)
		  {
			printf("\n linkd list is empty ..");
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
		nodeptr head=NULL;
		head=create(head);
		display(head);
		printf("\n delete frist element in linked list.");
		deletef(head,3);
		display(head);
	  }
