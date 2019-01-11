#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node *)malloc(sizeof(struct node))
struct node
{
	int data;
	struct node *next,*prev;
};

typedef struct node * nodeptr;

	nodeptr create(nodeptr head)
	  {
		int i,n;
		nodeptr p,current;
		printf("\n enter the limit of node");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		  {
			p=NODEALLOC;
			printf("\n enter the data %d::",i+1);
			scanf("%d",&p->data);
			 if(head==NULL)
			  {
				head=current=p;
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
	
	nodeptr insert(nodeptr head,int pos,int num)
	  {
		int i;
		nodeptr p,current;
		p=NODEALLOC;
		
		if(pos==1)
		  {
			p->next=head;
			head->prev;
			p=head;
		  }
	        else
		  {
			
}

	 
	  }
	
	nodeptr display(nodeptr head)
	  {
		nodeptr p,current;
		  if(head==NULL)
		    {
			printf("\n linked list empty");
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
		int pos,num=0;
		nodeptr head=NULL;
		head=create(head);
		display(head);
		printf("\n enter the position");
		scanf("%d",&pos);
		printf("\n enter the data");
		scanf("%d",&num);
		return 0;
			//head=insert(head,pos,num);
		//display(head);		
	  }


