#include<stdio.h>
  int static a=1;
int fun()
  {
	printf("%d",a);
	return 0;
  }
int fun1()
 {
	printf("%d",a);
 }
int main()
{
	fun1();
	a=a+2;
	printf("\n%d",a);
	fun();
}
  
