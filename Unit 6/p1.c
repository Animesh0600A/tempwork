#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int num,count=1;

    
    p("Entre a number: ");
    s("%d",&num);

    
    while (num>=count)
    {
        p("%d\t",count);
        count+=1;
    }

    
    count=1;

    p("\n\n");

    do
    {
        p("%d\t",count);
        count+=1;
    }
    while (num>=count);


    count=1;

    again:if(num>=count)
    {
        p("%d\t",count);
        count+=1;
        goto again;
    }
}