// ID : 12009010
//Write a C program that read an array and display minimum
#include<stdio.h>
int main()
{
    int n,i;
    printf("How many numbers :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int minimum=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<minimum)
        {
            minimum=a[i];
        }
    }
    printf("Minimum is=%d",minimum);
    return 0;

}
