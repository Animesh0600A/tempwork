#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int num,count=1;

    
    p("Entre a number: ");
    s("%d",&num);

    
    while (10>=count)
    {
        p("%d x %d = %d\n",num,count,num*count);
        count+=1;
    }
    
    count=1;

    p("\n\n");

    do
    {
        p("%d x %d = %d\n",num,count,num*count);
        count+=1;
    }
    while(10>=count);

    count=1;

    p("\n\n");

    again:if(10>=count)
    {
        p("%d x %d = %d\n",num,count,num*count);
        count+=1;
        goto again;
    }
}