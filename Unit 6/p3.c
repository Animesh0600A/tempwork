#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int num,count,fact;
    p("Entre number: ");
    s("%d",&num);

    again:if(count<=num)
    {
        fact*=count;
        count ++;
        goto again;
    }

    p("Factor = %d",fact);

 
 

    while(count<=num)
    {
        fact*=count;
        count ++;
        p("Factor = %d",fact);
    }




    do
    {
        fact*=count;
        count ++;
        p("Factor = %d",fact);
    }
    while(count<=num);

}