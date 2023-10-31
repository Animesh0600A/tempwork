#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int num=1,i;
    p("Entre a number: ");
    s("%d",&i);
    while(num<=i)
    {
        if(num%2==0)
            p("%d ",num);
    }
}