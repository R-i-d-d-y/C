#include<stdio.h>
int main()
{
char ch;
printf("Enter lower case character");
ch=getchar();
printf("Equivalent uppercase character is =");
putchar(toupper(ch));
return 0;
}
