#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int num,count=1,sum;
    p("Entre number: ");
    s("%d",&num);

    
    again:if(count<=num)
    {
        sum=sum+count;
        count ++;
        goto again;
    }
    p("sum = %d",sum);

    count=1;

    p("\n\n");
    
    do
    {
        sum=sum+count;
        count ++;
        p("sum = %d",sum);
    }
    while (count<=num);

    count=1;

    p("\n\n");

    while (count<=num)
    {
        sum=sum+count;
        count ++;
        p("sum = %d",sum);
    }
}