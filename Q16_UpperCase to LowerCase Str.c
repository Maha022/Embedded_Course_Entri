/*
Requirement

Write a C program to convert all uppercase letters in a string into lowercase while keeping other characters unchanged

Design

Read a string from the user
Check each character using a loop
If the character is an uppercase letter, convert it to lowercase using ASCII values
Leave lowercase letters, numbers and symbols unchanged
Display the modified string

Code */

#include <stdio.h>

int main()
{
    char m[100];
    int i = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", m);

    while (m[i] != '\0')
    {
        if (m[i] >= 'A' && m[i] <= 'Z')
            m[i] = m[i] + 32;

        i++;
    }

    printf("Lowercase string: %s", m);

    return 0;
}
/*
Enter a string: MAHALaKsHmI
Lowercase string: mahalakshmi*/