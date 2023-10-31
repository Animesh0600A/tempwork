#include<stdio.h>
main(){
	int i,j,arr[5][2],sum;
	
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
		sum=sum+arr[i][j];
		}
		printf("\n");
	}
	printf("SUM = %d",sum);
}
