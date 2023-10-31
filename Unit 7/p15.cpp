#include <stdio.h>
#include <string.h>
main(){
	char name[10];
	int length;
	puts("Entre name: ");
	gets(name);
	length = strlen(name);
	printf("Length of string is %d",length);
}
