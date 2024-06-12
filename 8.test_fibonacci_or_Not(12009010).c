// ID : 12009010
//Write a C program to test numbers Fibonacci or not
#include<stdio.h>
int main()
{
    int n,f1,f2,f3,s=0;
    printf("Enter the number you want to test :");
    scanf("%d",&n);
    f1=0;
    f2=1;
    if(n==0)
        printf("Not Fibonacci");

    f3=f1+f2;
    while(f3<n){
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(f3==n){
       printf(" Fibonacci Number ");
    }
    else
    {

        printf("Not a Fibonacci Number");
    }

}
