/* Requirement

Write a C program to find all pairs of elements in an array whose sum equals a given target value without pairing an element with itself

Design

Read the array size and its elements
Read the target sum from the user
Use nested loops to check every possible pair of different elements
Print each pair whose sum equals the target value
If no matching pair is found, display a message

Code */

#include <stdio.h>

int main()
{
    int m[100], l, i, j, target, flag = 0;

    printf("Enter array size: ");
    scanf("%d", &l);

    printf("Enter array elements: ");
    for (i = 0; i < l; i++)
        scanf("%d", &m[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    for (i = 0; i < l; i++)
    {
        for (j = i + 1; j < l; j++)
        {
            if (m[i] + m[j] == target)
            {
                printf("(%d, %d)\n", m[i], m[j]);
                flag = 1;
            }
        }
    }

    if (flag == 0)
        printf("No matching pair found");

    return 0;
}
/* Enter array size: 4
Enter array elements: 2 4 6 8
Enter target sum: 6
(2, 4) */
