// ID : 12009010
//Write a C program that read 3 numbers and display Medium number.
#include<stdio.h>
int main()
{

    int i,j,a;
    printf("Enter 3 integer number :");
     int number[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(number[i]>number[j])
            {
                a=number[i];
                number[i]=number[j];
                number[j]=a;
            }
        }
    }
    printf("The Medium Number is : %d ",number[1]);
 return 0;
}

