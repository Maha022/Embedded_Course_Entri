/*
Requirement

Write a C program to rotate the elements of an array left or right by n positions, even when n is greater than the array size

Design

Read the array size and its elements
Read the number of positions and the rotation direction
Use the modulus operator to handle rotations larger than the array size
Shift the elements in the specified direction
Display the rotated array

Code  */

#include <stdio.h>

int main()
{
    int m[100], l, n, i, temp;
    char dir;

    printf("Enter array size: ");
    scanf("%d", &l);

    printf("Enter array elements: ");
    for (i = 0; i < l; i++)
        scanf("%d", &m[i]);

    printf("Enter number of positions: ");
    scanf("%d", &n);

    printf("Enter direction (L/R): ");
    scanf(" %c", &dir);

    n = n % l;

    if (dir == 'L' || dir == 'l')
    {
        for (i = 0; i < n; i++)
        {
            temp = m[0];

            for (int j = 0; j < l - 1; j++)
                m[j] = m[j + 1];

            m[l - 1] = temp;
        }
    }
    else if (dir == 'R' || dir == 'r')
    {
        for (i = 0; i < n; i++)
        {
            temp = m[l - 1];

            for (int j = l - 1; j > 0; j--)
                m[j] = m[j - 1];

            m[0] = temp;
        }
    }
    else
    {
        printf("Invalid direction");
        return 0;
    }

    printf("Rotated array: ");
    for (i = 0; i < l; i++)
        printf("%d ", m[i]);

    return 0;
}
/* Enter array size: 4
Enter array elements: 1 3 2 6
Enter number of positions: 2
Enter direction (L/R): L
Rotated array: 2 6 1 3  */