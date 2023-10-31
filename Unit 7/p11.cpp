#include<stdio.h>
main(){
	int i,j,arr[5][2],min;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&arr[i][j]);	
		}
	}
	min=arr[1][1];
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
		if (min>arr[i][j])
		{
			min=arr[i][j];
		}
		}
		printf("\n");
	}
	printf("min = %d",min);
}
