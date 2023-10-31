#include<stdio.h>
#define p printf
#define s scanf
main(){
	int a[10],i,min;
	for (i=0;i<=9;i++)
	{
		s("%d",&a[i]);
	}
	min=a[1];
	for (i=0;i<=9;i++)
	{
		if (a[i]<min)
			min=a[i];
	}
	printf("MINIMUM = %d",min);
}
