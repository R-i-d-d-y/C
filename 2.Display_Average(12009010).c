// ID : 12009010
// Write a C program that read and display average
#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("How many numbers :");
    scanf("%d",&n);
    int a[n];
    float average;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    average=s/n;
    printf("%.2f",average);
    return 0;
}
