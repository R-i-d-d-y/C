// ID : 12009010
// write a C program that display first n prime numbers.
#include<stdio.h>
int main()
{
    int N,i,x= 2;
    printf("Enter a number :");
    scanf("%d",&N);
    while(N>0)
    {
        for( i=2;i<x;i++)
            {
                if(x%i==0)
                break;
            }

                if(i==x){
                printf("%d ",x);
                N--;
            }
            x++;
    }
}

