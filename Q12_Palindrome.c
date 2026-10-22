/*Requirement
Write a C program to check whether a given string reads the same forward and backward

Design

Read a string from the user
Find the length of the string
Compare the characters from the beginning and end using a loop
If all characters match, display that the string is a palindrome, otherwise display that it is not a palindrome

Code */

#include <stdio.h>
#include <string.h>

int main()
{
    char m[100];
    int l, i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", m);

    l = strlen(m);

    for (i = 0; i < l / 2; i++)
    {
        if (m[i] != m[l - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
