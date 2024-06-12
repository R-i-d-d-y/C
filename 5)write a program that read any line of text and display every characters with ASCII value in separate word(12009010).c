// ID : 12009010
//Write a program that read any line of text and display every character with ASCII value.
#include <stdio.h>
#include<string.h>
int main()
{
    char line[100];
    int i, n, length;
    printf("Enter a line of text: ");
    gets(line);
    length= strlen(line);
    printf("ASCII vale is : \n");
    for(i=0; i<length; i++)
    {
        printf("%d\n", line[i]);
    }
    return 0;
}

