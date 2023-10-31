#include <stdio.h>
#include <string.h>
main(){
	char name1[20]="Right",name2[10]= "light";
	int ans;
	ans=strcmp(name1,name2);
	if(ans==0)
		puts("both are identificial");
	else
		puts("different");
}
