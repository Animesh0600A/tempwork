#include<stdio.h>
main(){
	int i,j,u=1;
	for (i=1;i<6;i++)
	{
		for (j=1;j<=i;j++)
		{
			
			printf("%d",u);
			u++;
		}
		printf("\n");
	}
}
