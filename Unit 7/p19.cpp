#include <stdio.h>
#include <string.h>
main(){
	char name[20]="Abcdefghijk",copy[20];
	puts(copy);//will print garbage value
	strcpy(copy,name);
	puts(copy);
}
