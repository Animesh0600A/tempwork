#include<stdio.h>
main(){
	int i,j,arr[5][2]={1,2,3,4,5,6};
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("arr[%d][%d] = %d ",i,j,arr[i][j]);	
		}
	printf("\n");
	}
}
