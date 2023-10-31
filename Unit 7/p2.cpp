#include<stdio.h>
#define p printf
main(){
	int a[5],i;
	a[0]=8, a[1]=7,a[2]=5,a[3]=3,a[4]=7;
	for (i=0;i<=4;i++)
	{
		p("a[%d] = %d\n",i,a[i]);
	}
}
