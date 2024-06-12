// ID : 12009010
//Write a program that read a line of text and display number of vowels, constants,digits,spaces and others character address.
#include <stdio.h>

int main()
{
    char line[150];
    int i;
    int vowels, consonants, digits, spaces,others,length;
    vowels = consonants = digits = spaces = others=0;
    printf("Enter a line of text: ");
    gets(line);
    

    for ( i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U')
            {
            ++vowels;
            }
        else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
            {
            ++consonants;
            }
        else if (line[i] >= '0' && line[i] <= '9')
            {
            ++digits;
            }
        else if (line[i] == ' ')
            {
            ++spaces;
            }
        else others++;
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpaces: %d", spaces);
    printf("\nOthers: %d",others);
    return 0;
}

