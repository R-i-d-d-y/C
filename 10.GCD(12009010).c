// ID : 12009010
// Write a C program that read 2 numbers and display Greatest Common Divisor.
#include<stdio.h>
int main()
{
int a,b,gcd=1,min,i;
printf("Enter two integer values :");
scanf("%d%d",&a,&b);
    if(a<b)
        min=a;
    else
        min=b;
        for(i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            gcd=i;
    }
    printf("GCD of %d and %d is = %d\n",a,b,gcd);
    return 0;
}

