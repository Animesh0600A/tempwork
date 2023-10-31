#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int num;
    p("Entre the number: ");
    s("%d",num);

    if (num%2==0)
        goto ev;
    else
        goto od;
    
    ev:p("It is an odd number");
    od:p("It is an even number");
}