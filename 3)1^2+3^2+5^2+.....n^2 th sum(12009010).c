// ID : 12009010
//1^2+3^2+5^2+7^2+.....+n^2 th sum.
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(i =1; i<=n; i=i+2)
    {
        printf("%d+",i*i);
        sum = sum + i*i;

    }
    printf("\b=%d\n", sum);
    return 0;
}


