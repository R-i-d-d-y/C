// ID : 12009010
//write a C program that read an integer and test whether it is prime or not.
#include<stdio.h>

int main()
{

    int x,i;
    printf("Enter a number :");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
      {
        if(x%i==0)
          break;
      }
    if(i==x)
        printf("%d is a prime number.",x);
    else
        printf("%d is not a prime number.",x);
    return 0;

}


