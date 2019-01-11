//linked list insert into any postion 
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
	void display(nodeptr head)
   	  {
		
		nodeptr current=head;
		if(head==NULL)
		  {
			printf("\n linkd list is empty ..");
		  }
		else
		  {	printf("%4d",current->data);
			for(current=head->next;current!=head;current=current->next)
			  {
				printf("%4d",current->data);
			  }		
		  }
	  }
	
	nodeptr cheak(nodeptr head)
		{
			nodeptr current;
			for(current=head;current!=NULL;current=current->next);
			  {
				if(current->next==head)
				  {
					printf("linked list is circular");
				  }
			  }
		}

	nodeptr bubblesort(nodeptr head)			
	 {
		int temp;
		nodeptr pass,current,p;
		for(pass=head;pass->next!=NULL;pass=pass->next)
		  {
		   for(current=head;current->next!=NULL;current=current->next)
			{
				if(current->data>current->next->data)
				  {
					temp=current->data;
					current->data=current->next->data;
					current->next->data=temp;
				  }
			}
		   
		 }
		return head;
		
	 }
	 
	int search(nodeptr head,int num)
	   {
		nodeptr current;
		for(current=head;current!=NULL;current=current->next);
		  {
			if(current->data==num)
			  {
				return 0;
			  }
			  else
			   {
				return 1;
			   }
		  }
	
	   }
	
	
	nodeptr insert(nodeptr head,int pos,int num)
	  {
		nodeptr current,p;
		int i;
		p=NODEALLOC;	
		p->data=num;
		if(pos==1)
		  {
			p->next=head;
			head=p;
			
		  }
		else
		 {
		

	for(i=1,current=head;i<pos-1 && current->next!=NULL;i++,current=current->next);
		   {
			p->next=current->next;
			current->next=p;
			
		   }
		return head;
		 }
	  }
	
	int main()
	 {
		int pos,num;
		nodeptr head=NULL;
		head=create(head);
		display(head);
		cheak(head);
	}	
		//head=bubblesort(head);
		/*printf("\n sorted order\n");
		display(head);
		printf("\n enter the elements");
		scanf("%d",&num);
		pos=search(head,num);		
		if(pos==0)
		  {
			printf("\n record is found");
		  }
		  else
		  {
			printf("\n record not found");
	          }
	 }*/
