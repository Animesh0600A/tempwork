#include<stdio.h>
#define p printf
#define s scanf
main(){
	int a[10],i;
	for (i=0;i<=9;i++)
	{
		p("Entre a[%d]: ",i);
		s("%d",&a[i]);
	}
	for (i=0;i<=9;i++)
	{
		p("a[%d] = %d\n",i,a[i]);
	}
}
