// ID : 12009010
//Write a C program that search any number from an array.
#include<stdio.h>
int main()
{
    int n,x,p=0,i;
    printf("How many numbers :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search :");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            p=1;
            break;
        }
    }
    if(p)
            printf("Number is found in %d index\n",i);
        else
        printf("Number is not found\n");

    return 0;
}


