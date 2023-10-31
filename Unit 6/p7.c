#include<stdio.h>
#define p printf
#define s scanf
int main(){
    int num,sum=0,m;
    p("Entre Number: ");
    s("%d",&num);
    
    do
    {
        m=num%10;
        sum += m;
        num=num/10;
    } 
    while (num<0)
        p("/n/nSum = %d",sum);
    
}