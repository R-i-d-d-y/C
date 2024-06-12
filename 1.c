
#include <stdio.h>
int main()
{
   int num1,num2,min,gcd=1,i;
   printf("Enter 2 number");
   scanf("%d %d",&num1,&num2);
   if(num1<num2)
   min=num1;
   else
   min=num2;
   for(i=2;i<=min;i++)
   {
       if(num1%i==0&&num2%i==0)
        gcd=i;
   }

   printf("Gcd of %d and %d is %d",num1,num1,gcd);







    return 0;
}

