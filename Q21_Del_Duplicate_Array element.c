/* Requirement

Write a C program to remove duplicate elements from an array and display only the unique elements

Design

Read the size and elements of the array from the user
Compare each element with the remaining elements
Skip duplicate elements and keep only unique values
Display the updated array

Code */

#include <stdio.h>

int main()
{
    int m[100], l, i, j, k;

    printf("Enter array size: ");
    scanf("%d", &l);

    printf("Enter array elements: ");
    for (i = 0; i < l; i++)
        scanf("%d", &m[i]);

    for (i = 0; i < l; i++)
    {
        for (j = i + 1; j < l; j++)
        {
            if (m[i] == m[j])
            {
                for (k = j; k < l - 1; k++)
                    m[k] = m[k + 1];

                l--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < l; i++)
        printf("%d ", m[i]);

    return 0;
}
/*
Enter array size: 4
Enter array elements: 0 1 1 2
Array after removing duplicates: 0 1 2 */