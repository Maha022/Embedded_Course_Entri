/*

Requirement

Write a C program to replace multiple consecutive spaces in a sentence with a single space

Design

Read a sentence from the user
Check each character using a loop
Copy each character into a new string, skipping extra consecutive spaces
Display the cleaned string

Code */

#include <stdio.h>

int main()
{
    char m[200], l[200];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    scanf(" %[^\n]", m);

    while (m[i] != '\0')
    {
        if (m[i] != ' ' || (i > 0 && m[i - 1] != ' '))
            l[j++] = m[i];

        i++;
    }

    l[j] = '\0';

    printf("Cleaned string: %s", l);

    return 0;
}
/* Enter a sentence: Hi            HELLO
Cleaned string: Hi HELLO  */