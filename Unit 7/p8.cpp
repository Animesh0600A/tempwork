#include<stdio.h>
main(){
	int i,j,arr[5][2];
	
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
		if (arr[i][j]%2==1)
			printf("arr[%d][%d] = %d is odd ",i,j,arr[i][j]);
		else
			printf("arr[%d][%d] = %d is even ",i,j,arr[i][j]);
		}
		printf("\n");
	}
}
