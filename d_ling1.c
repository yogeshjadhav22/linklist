#include<stdio.h>
#include<stdlib.h>
#define Nodealloc (struct node*)malloc(sizeof(struct node))

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
	printf("\n enter the number of node");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p=Nodealloc;
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
nodeptr insertf(nodeptr head)
	{
		nodeptr p;
		p=Nodealloc;
		printf("enter the first postion data");
		scanf("%d",&p->data);
		p->next=NULL;
		p->next=head;
		head=p;
		return head;
	}	
		
nodeptr insertl(nodeptr head)
	{
		nodeptr p,current;
		p=Nodealloc;
		printf("enter the data in last postion");
		scanf("%d",&p->data);
		for(current=head;current->next!=NULL;current=current->next);
		{
			current->next=p;
			current=p;
		}
		return head;
		
	}

nodeptr inserta(nodeptr head)
	{		
		nodeptr current,p;
		int i,pos;
		p=Nodealloc;
		printf("enter the postion");
		scanf("%d",&pos);
		printf("\n enter the data");
		scanf("%d",&p->data);
		if(pos==1)
		{
			p->next=head;
			head=p;
		}
		else
		{
		    for(i=1,current=head;i<pos-1 &&current->next!=NULL;i++,current=current->next);
		    {
			p->next=current->next;
			current->next=p;
	 	    }
		}
		return head;
	}
	
nodeptr deletef(nodeptr head)
	{
		nodeptr p;
		p=head;
		head=head->next;
		free(p);
		return head;
	}
nodeptr deletel(nodeptr head)
	{
		nodeptr p,current;
		for(current=head;current->next->next!=NULL;current=current->next);
		{
			p=current->next;
			current->next=NULL;
			free(p);
			
			
		}
		return head;
	}

nodeptr deletea(nodeptr head)
{
	nodeptr p,current;
	int i,pos;
	printf("enter the postion");
	scanf("%d",&pos);
	if(pos==1)	
	{
		p=head;
		head=head->next;
		free(p);
	}
	else
	{
		for(i=1,current=head;i<pos-1 && current->next->next!=NULL;i++,current=current->next);
		{
			p=current->next;
			current->next=p->next;
			free(p);
			//printf("\n%d",current->data);
		}
	}
	return head;
}
nodeptr concat(nodeptr head,nodeptr head1)
	{
		nodeptr current;
		for(current=head;current->next!=NULL;current=current->next);
		   {
				current->next=head1;
				head1=current;
				
		   }
		return head;
	}

void count1(nodeptr head)
{
	int count=0;
	nodeptr current;
	for(current=head;current!=NULL;current=current->next)
	{
		count++;
	}
	printf("\n count of linked list:%d",count);
}

int search(nodeptr head,int num)
{
	nodeptr current;
	int i;
	for(i=0,current=head;current!=NULL;i++,current=current->next)
	{	
		if(current->data==num)
		 {
			return 1;
			break;
			
		 }
		
	}
	
}
nodeptr sortl(nodeptr head)
	{
		nodeptr current,temp;
		int dat;
		for(temp=head->next;temp->next!=NULL;temp=temp->next)
		{
			for(current=head;current->next!=NULL;current=current->next)
			{
				if(current->data>current->next->data)
				{
				
					dat=current->data;
					current->data=current->next->data;
					current->next->data=dat;
				}
			}
		}
	return head;
	}

nodeptr ins_del(nodeptr head)
	{
		nodeptr p,current;
		for(current=head;current->next!=NULL;current=current->next);
		{
			p=head;
			head=head->next;
		//	printf("check head elements::%d",head->data);	
			current->next=p;
			p->next=NULL;
			
		
		}
		
		return head;
	}

nodeptr rev(nodeptr head)
	{
		nodeptr prev,current,next;
		current=head;
		prev=NULL;
		while(current!=NULL)
		{
			next=current->next;
			current->next=prev;
			prev=current;
			current=next;
		}
		
		return prev;
	}

void display(nodeptr head)
{
	nodeptr current;
	if(head==NULL)
	{
		printf("linked list is empty");
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
	nodeptr head=NULL,head1=NULL;
	head=create(head);
	//head=insertf(head);
	//head=insertl(head);
//	head=inserta(head);
//	display(head);
	//printf("\nafter delete elements in linked list\n");
	//head=deletef(head);
	//head=deletel(head);
	//head=deletea(head);
	//head1=create(head1);
	//head=concat(head,head1);
	 // count1(head);
	/*
	 int pos,num;
	 printf("enter the elements of linked list");
	 scanf("%d",&num);
	 pos=search(head,num);
		if(pos==1)
		  {
			printf(" found elements in linked list");
		  }
		else
		  {
			printf("not found elements in linked list");
		  }
	*/
//	head=sortl(head);
//	head=ins_del(head);
	head=rev(head);
	display(head);
}
