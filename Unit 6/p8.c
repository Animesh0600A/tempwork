#include<stdio.h>
#define p printf
#define s scanf

main(){
	int a,l=0,t;
	p("Entre a 3 digit number: ");
	s("%d",&a);
	
	while(1){
		t=a%10;
		l=l+t;
		p("%d ",t);
		a=a/10;
		if (a<=0)
			break;
	}
	p("= %d",l);
}
