#include<stdio.h>
#include<string.h>
  int main()
	{
	char str[10];
	int i;
	printf("\n it is display the linked list?Y/N");
	 for(i=0;str[i]!='\0';i++)
	  {
		scanf("%s",&str[i]);
	  }
	  if(str[i]=="Y")
	   {
		printf("accept");
	   }
	  else
	   {	
		printf("not");
	   }

	}
