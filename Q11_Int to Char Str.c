/*Requirement
Write a C program to convert an integer into a string of characters, including the negative sign if the number is negative

Design

Read an integer from the user
Extract each digit using the modulus operator and convert it into a character
Store the characters in an array and reverse their order
Add the negative sign if the number is negative
Display the resulting string

Code */

#include <stdio.h>

int main()
{
    int m, l, i = 0, j;
    char str[20], temp;

    printf("Enter an integer: ");
    scanf("%d", &m);

    l = m;

    if (l < 0)
        l = -l;

    do
    {
        str[i] = (l % 10) + '0';
        l = l / 10;
        i++;
    } while (l > 0);

    if (m < 0)
        str[i++] = '-';

    str[i] = '\0';

    for (j = 0; j < i / 2; j++)
    {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    printf("String = %s", str);

    return 0;
}