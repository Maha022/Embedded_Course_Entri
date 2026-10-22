/* Requirement

Write a C program to rearrange an array so that all negative numbers appear before positive numbers while preserving the original order of both groups

Design

Read the size and elements of the array
Copy all negative numbers into a temporary array in their original order
Copy all positive numbers and zeros into the same array in their original order
Display the rearranged array

Code */

#include <stdio.h>

int main()
{
    int m[100], l[100], n, i, j = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &m[i]);

    for (i = 0; i < n; i++)
    {
        if (m[i] < 0)
            l[j++] = m[i];
    }

    for (i = 0; i < n; i++)
    {
        if (m[i] >= 0)
            l[j++] = m[i];
    }

    printf("Rearranged array: ");
    for (i = 0; i < n; i++)
        printf("%d ", l[i]);

    return 0;
}
/*  Enter array size: 5
Enter array elements: 2 4 -1 -2 5
Rearranged array: -1 -2 2 4 5  */