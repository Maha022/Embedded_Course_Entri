/*Requirement

Write a C program to find the second largest and second smallest distinct elements in an array without sorting it, handling duplicate values correctly

Design

Read the size and elements of the array
Find the largest and smallest elements in the array
Scan the array again to find the second largest and second smallest distinct values
If the second largest or second smallest value does not exist, display an appropriate message
Display both results

Code */

#include <stdio.h>

int main()
{
    int m[100], l, i;
    int large, small, slarge = 0, ssmall = 0;
    int f1 = 0, f2 = 0;

    printf("Enter array size: ");
    scanf("%d", &l);

    printf("Enter array elements: ");
    for (i = 0; i < l; i++)
        scanf("%d", &m[i]);

    large = small = m[0];

    for (i = 1; i < l; i++)
    {
        if (m[i] > large)
            large = m[i];

        if (m[i] < small)
            small = m[i];
    }

    for (i = 0; i < l; i++)
    {
        if (m[i] < large && (!f1 || m[i] > slarge))
        {
            slarge = m[i];
            f1 = 1;
        }

        if (m[i] > small && (!f2 || m[i] < ssmall))
        {
            ssmall = m[i];
            f2 = 1;
        }
    }

    if (f1)
        printf("Second largest = %d\n", slarge);
    else
        printf("Second largest does not exist\n");

    if (f2)
        printf("Second smallest = %d\n", ssmall);
    else
        printf("Second smallest does not exist\n");

    return 0;
}
/* Enter array size: 4
Enter array elements: 22 11 19 39
Second largest = 22
Second smallest = 19 */ 