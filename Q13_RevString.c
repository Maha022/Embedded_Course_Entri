/*Requirement

Write a C program to reverse the characters of a given string using a loop

Design

Read a string from the user
Find the length of the string
Swap the first and last characters and continue moving towards the middle using a loop
Display the reversed string

Code */

#include <stdio.h>
#include <string.h>

int main()
{
    char m[100], temp;
    int l, i;

    printf("Enter a string: ");
    scanf("%s", m);

    l = strlen(m);

    for (i = 0; i < l / 2; i++)
    {
        temp = m[i];
        m[i] = m[l - i - 1];
        m[l - i - 1] = temp;
    }

    printf("Reversed string = %s", m);

    return 0;
}