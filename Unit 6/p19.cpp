#include<stdio.h>
#define p printf
main(){
	int i,j,u=1;
	for (i=1;i<5;i++)
	{
		for (j=1;j<=i;j++)
		{
			p("%d",u);
			u+=2;
		}
		p("\n");
	}
}
