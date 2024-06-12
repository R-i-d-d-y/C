#include<stdio.h>
int main()
{
int a=0,b=1,c,n,i;
printf("enter n=");
scanf("%d",&n);
printf("Fibonacci series is=");
for(i=1;i<=n;i++)
{
    c=a+b;
    printf("%d ",a);
    a=b;
    b=c;
}



return 0;
}
