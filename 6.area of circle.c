#include<stdio.h>
#define size 100
int main()
{
char text[size];
int i;
printf("Enter your text");
gets(text);
for(i=0; text[i]!=0 ;i++)
    {

     if(text[i]>='a'&& text[i]<='z')
      {
    text[i]=text[i]-32;
      }
    }
printf("upper string is =%s",text);
return 0;
}
