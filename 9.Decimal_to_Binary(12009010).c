// ID : 12009010
// Write a C program that read any decimal number and display equivalent binary number.
#include<stdio.h>
int main()
{

    int n,rem,j;
    int  binary[100];
    printf("Enter the value of n :");
    scanf("%d",&n);
    int i=0;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        binary[i]=rem;
        i++;
    }
     printf("Equivalent Binary number is :");
        for(j=i-1;j>=0;j--)
   {
        printf("%d",binary[j]);
    }

}

