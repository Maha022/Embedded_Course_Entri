/*Requirement

Write a C program to toggle a specified number of consecutive bits in an integer starting from a given bit position while
keeping the other bits unchanged


Design

Read an integer, the starting bit position and the number of bits to toggle
Use a loop to create a bit mask for each position
Toggle the selected bits using the bitwise XOR operator
Display the final integer value

Code */

#include <stdio.h>

int main()
{
    unsigned int m, l, n;
    int i;

    printf("Enter an integer: ");
    scanf("%u", &m);

    printf("Enter starting bit position: ");
    scanf("%u", &l);

    printf("Enter number of bits to toggle: ");
    scanf("%u", &n);

    for (i = 0; i < n; i++)
        m ^= (1U << (l + i));

    printf("Result = %u", m);

    return 0;
}
/*Enter an integer: 2
Enter starting bit position: 1
Enter number of bits to toggle: 1
Result = 0*/