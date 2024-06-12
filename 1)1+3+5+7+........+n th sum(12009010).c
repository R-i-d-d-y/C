// ID : 12009010
// 1+3+5+7+....n th sum
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the the upper limit :");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
    }
    printf("sum is= %d\n",sum);
    return 0;
}

