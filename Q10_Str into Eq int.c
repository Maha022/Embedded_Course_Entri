/*Requirement
Write a C program to read a string of digits and convert it into an equivalent integer using loops and operators

Design

Read the number as a string from the user
Process each character and convert it into a digit
Multiply the current value by 10 and add the next digit
Display the converted integer*/

// Code

#include <stdio.h>

int main()
{
    char m[20];
    int l = 0, i = 0;

    printf("Enter a number as a string: ");
    scanf("%s", m);

    while (m[i] != '\0')
    {
        l = l * 10 + (m[i] - '0');
        i++;
    }

    printf("Integer value = %d", l);

    return 0;
} 