/*Requirement

Write a C program to check whether a given string contains every letter of the English alphabet at least once, regardless of uppercase or lowercase

Design

Read a sentence from the user
Check each character and identify the alphabet letters using ASCII values
Mark the letters found in an array
Check whether all 26 letters are present
Display whether the string is a pangram or not

code */

#include <stdio.h>

int main()
{
    char m[200];
    int l, i, flag = 1;
    int letters[26] = {0};

    printf("Enter a sentence: ");
    scanf(" %[^\n]", m);

    for (i = 0; m[i] != '\0'; i++)
    {
        if (m[i] >= 'A' && m[i] <= 'Z')
            letters[m[i] - 'A'] = 1;
        else if (m[i] >= 'a' && m[i] <= 'z')
            letters[m[i] - 'a'] = 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (letters[i] == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Pangram");
    else
        printf("Not a Pangram");

    return 0;
}
/*Enter a sentence: Jump
Not a Pangram
Enter a sentence: The quick brown fox jumps over the lazy dogs
Pangram*/
