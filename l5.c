//singly linked list
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
		//char str[10];
		nodeptr p,current;
		printf("\n enter the limit of node");
		scanf("%d",&n);
		
		//p->next=NULL;
		for(i=0;i<n;i++)
		  {	
			p=NODEALLOC;					//create linked list
			printf("\n Enter the data%d::",i+1);
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
		nodeptr p;
		p=NODEALLOC;
		p->data=num;
		p->next=head;
		head=p;
		return head;

		
	   }
	 
	
	
	nodeptr insertb(nodeptr head,int pos,int num)
	   {
		nodeptr current,p;
		int i;
		p=NODEALLOC;
		p->data=num;
		for(i=1,current=head;i<pos-1 && current!=NULL;i++,current=current->next);
		  {
			p->next=current->next;
			current->next=p;	
		  }
	   }	
	


	nodeptr inserte(nodeptr head,int num)
	  {
		nodeptr current,p;
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
		nodeptr current,p;
		p=NODEALLOC;
		int i;
		p->data=num;
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
			return head;
		 }
	  }
	
	nodeptr deletef(nodeptr head)
	  {
		nodeptr p;
		p=head;
		head=head->next;
		free(p);
		return head;	
	  }
	
	nodeptr deleteb(nodeptr head,int pos)
	  {
		nodeptr current,p;
		int i;
		for(i=1,current=head;i<pos-1 && current!=NULL;i++,current=current->next);
		 {
			p=current->next;
			current->next=p->next;
			free(p);
			return head;
		 }
	  }
	
	nodeptr delete_end(nodeptr head)
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
	
	nodeptr delete(nodeptr head,int pos)
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
				return head;
		 	  }
		  }
	  }
	
	
	void display(nodeptr head)
	  {
		nodeptr current;
		printf("\n DISPLAY THE LINKED LIST IS::\n");
		if(head==NULL)
       		  {
			printf("\n linked list is empty..");
			
		  }						//display the linked list
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
		int ch,num,pos;
		nodeptr head=NULL;
		
		while(1)
		  {
				
			printf("\nMENU::");
			printf("\n1:CREATE");
			printf("\n2:FRIST POSTION INSERT");
			printf("\n3:BETWEEN POSTION INSERT");
			printf("\n4:END POSTION INSERT");
			printf("\n5:ANY POSTION INSERT");
			printf("\n6:FIRST POSTION DELETE");
			printf("\n7:BETWEEN POSTION DELETE ");
			printf("\n8:END POSTION DELETE");
			printf("\n9:ANY POSTION DELETE");
			printf("\n10:DISPLAY");
			printf("\n11:EXIT.");
			printf("\nEnter the your Choise?");
			scanf("%d",&ch);
		    
		     switch(ch)
		       {
			  case 1:
				 head=create(head);
				// display(head);
			  break;
			
			  case 2:
			        	 printf("\n enter the number");
					 scanf("%d",&num);
					 head=insertf(head,num);
			  break;
			
			  			
			  case 3:
			  		printf("\n enter the postion of linked list");
					scanf("%d",&pos);
					printf("\n enter the data::");
					scanf("%d",&num);
					head=insertb(head,pos,num);
			  break;

			  			
			  case 4:
			  	       	printf("\n enter the number of data");
					scanf("%d",&num);
					head=inserte(head,num);
			  break;
			
						
			  case 5:
			  		printf("\n enter the postion of linked list insert elements");
					scanf("%d",&pos);
					printf("\n enter the data:");
					scanf("%d",&num);
					head=insert(head,pos,num);

			  break;
			
			  			
			  case 6:
					deletef(head);
			  
			  break;
					
			  			
			  case 7:
			  		printf("\n enter the postion of elements deleted");
					scanf("%d",&pos);
					deleteb(head,pos);
			  break;
				
			  			
			  case 8:
			  		delete_end(head);
			  break;
			
			  			
			  case 9:
			  		printf("\n enter the postion of elements deleted");
					scanf("%d",&pos);
					delete(head,pos);
			  break;
	
			 			
			  case 10:
								  		
					display(head);
			  break;

			  			
			  case 11:
			  		exit(0);
			  break;
		       }
		  }
	  }
