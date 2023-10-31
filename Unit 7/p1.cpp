#include<stdio.h>
#define p printf
main(){
	int a[10]={8,7,5,3,7},i;
	for (i=0;i<=9;i++)
	{
		p("a[%d] = %d\n",i,a[i]);
	}
}
