// ID : 12009010
//2.1+5.3+8.5+.....+n th sum.
#include <stdio.h>
int main()
{
    float i,n,sum=0.00;
    printf("Enter the upper limit :");
    scanf("%f",&n);
    for(i=2.1; i<=n; i=i+3.2)
    {
        sum = sum + i;
    }
    printf("Sum is =%.2f\n", sum);
    return 0;
}



