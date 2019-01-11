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
	
	nodeptr insertf(nodeptr head,int num)
	  {
		nodeptr p,current;
		//p->next=NULL;
		p=NODEALLOC;
		p->data=num;
	        p->next=head;
		head=p;
		return head;
				
	  }
	
	nodeptr inserte(nodeptr head,int num)
	  {
		nodeptr p,current;
		p=NODEALLOC;
		p->data=num;
		p->next=NULL;
	 	for(current=head;current->next!=NULL;current=current->next);
			{
				current->next=p;
				return head;
			}
		
	  }
	
	nodeptr insert(nodeptr head,int pos,int num)
	  {
		int i;
		nodeptr p,current;
		p=NODEALLOC;
		p->data=num;
		p->next=NULL;
		if(pos==1)
		 {
			p->next=head;
			head=p;	
		 }
		else
	        {
			for(i=1,current=head;i<pos-1 && current!=NULL;i++,current=current->next);
			  {
				p->next=current->next;
				current->next=p;
			  }
			
	        }
		return head;
		
	  }
	
	nodeptr deletef(nodeptr head)
	  {
		nodeptr p,current;
		p=head;
		head=head->next;
		free(p);
		return head;
		
	  }

	nodeptr deletee(nodeptr head)
	  {
		nodeptr p,current;
		for(current=head;current->next->next!=NULL;current=current->next);
		   {
			p=current->next;
			current->next=NULL;
			free(p);
			return head;
		   }
		
	  }
	
	nodeptr alter_del(nodeptr head)
		  {
			nodeptr current,p;
			for(current=head;current!=NULL;current=current->next);
			  {
				p=current->next;
				current->next=p->next;
				free(p);
				return head;
			  }
		  }

	nodeptr delete(nodeptr head,int pos)
	  {
		nodeptr p,current;
		int i;
		 if(pos==1)
		   {
			p=head;
			head=head->next;
			free(p);
		   }
		 else
		  {
			for(i=1,current=head;i<pos-1 &&current!=NULL;i++,current=current->next);
			  {
				p=current->next;
				current->next=p->next;
				free(p);	
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
	int num,ch,pos;
	nodeptr head=NULL;
	nodeptr head1=NULL;
	while(1)
	 {
		
		printf("\nMENU");
		printf("\n1:CREATE LINKLIST");
		printf("\n2:INSERT FIRST POS");
		printf("\n3:INSERT END POS");
		printf("\n4:INSERT ANY POS");
		printf("\n5:DELETE FIRST POS");
		printf("\n6:DELETE END POS");
		printf("\n7:DELETE ANY POS");
		printf("\n8:DISPLAY LINKED LIST");
		printf("\n9:CONCATE LINKED LIST");
		printf("\n10:ALTERNATE DELETE");
		printf("\n11:EXIT");
		printf("\n enter you choose");	
		scanf("%d",&ch);
		switch(ch)
		  {
			case 1:
				
		                head=create(head);
				//head=create(head1);
			break;
			
			case 2:
					printf("\n enter the number");
					scanf("%d",&num);
					head=insertf(head,num);
			break;
		
			case 3:
					printf("\n enter the number");
				      scanf("%d",&num);					
					head=inserte(head,num);
			break;
		
			case 4:
				   printf("\n enter the postion in insert elements");
				   scanf("%d",&pos);
				    printf("\n enter the data");
				    scanf("%d",&num);
				    insert(head,pos,num);
			break;

			case 5:
					printf("\n delete first node");
					deletef(head);
			break;
	
			case 	6:
					printf("\n delete end node");
					deletee(head);
			break;

			case 7:
					printf("\n delete any postion of node");
					scanf("%d",&pos);
					delete(head,pos);
			break;

			case 8:
					display(head);
					//display(head1);
			break;
		
			case 9: 
					head=concat(head,head1);
					//concat()
			break;
	
			case 10:	
					alter_del(head);
		
			break;
		
			case 11:
				exit(0);
			break;
		  }
	 }
		
		
		

}

