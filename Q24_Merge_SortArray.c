/*
Requirement

Write a C program to merge two arrays that are already sorted in ascending order into a single sorted array without using any sorting function

Design

Read the sizes and elements of both sorted arrays
Compare the current elements of the two arrays
Copy the smaller element into the third array and move to the next element
Copy the remaining elements from either array
Display the merged sorted array

Code */

#include <stdio.h>

int main()
{
    int m[100], l[100], p[200];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first sorted array: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &m[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second sorted array: ");
    for (j = 0; j < n2; j++)
        scanf("%d", &l[j]);

    i = 0;
    j = 0;

    while (i < n1 && j < n2)
    {
        if (m[i] <= l[j])
            p[k++] = m[i++];
        else
            p[k++] = l[j++];
    }

    while (i < n1)
        p[k++] = m[i++];

    while (j < n2)
        p[k++] = l[j++];

    printf("Merged sorted array: ");
    for (i = 0; i < k; i++)
        printf("%d ", p[i]);

    return 0;
}
/*  Enter size of first array: 3
Enter first sorted array: 11 22 2
Enter size of second array: 3
Enter second sorted array: 6 39 31
Merged sorted array: 6 11 22 2 39 31  */
