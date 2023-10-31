#include<stdio.h>
main(){
	int i,j,arr[5][2],max;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d",&arr[i][j]);	
		}
	}
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
		if (max<arr[i][j])
		{
			max=arr[i][j];
		}
		}
		printf("\n");
	}
	printf("MAX = %d",max);
}
