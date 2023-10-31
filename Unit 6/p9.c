#include<stdio.h>
#define p printf
#define s scanf

main(){
	int a=0,b=1,c,j=1,i;
	
	p("Entre number: ");
	s("%d",&i);
	
	while(j<=i){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
		j=j+1;
	}
}

