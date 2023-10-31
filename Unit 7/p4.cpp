#include<stdio.h>
#define p printf
#define s scanf
main(){
	int a[10],i,max=0;
	for (i=0;i<=9;i++)
	{
		s("%d",&a[i]);
	}
	for (i=0;i<=9;i++)
	{
		if (a[i]>max)
			max=a[i];
	}
	printf("MAXIMUM = %d",max);
}
