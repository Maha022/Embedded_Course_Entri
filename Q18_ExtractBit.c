/* Requirement

Write a C program to extract a specified number of bits from an integer starting at a given bit position using bitwise operators

Design

Read an integer, the starting bit position and the number of bits to extract
Shift the number to the right by the starting position
Create a mask containing the required number of bits set to 1
Use the bitwise AND operator to extract the selected bits
Display the extracted value

Code*/


#include <stdio.h>

int main()
{
    unsigned int m, l, n, result;
    
    printf("Enter an integer: ");
    scanf("%u", &m);

    printf("Enter starting bit position: ");
    scanf("%u", &l);

    printf("Enter number of bits to extract: ");
    scanf("%u", &n);

    result = (m >> l) & ((1U << n) - 1);

    printf("Extracted value = %u", result);

    return 0;
}
/*Enter an integer: 4
Enter starting bit position: 2
Enter number of bits to extract: 1
Extracted value = 1*/
