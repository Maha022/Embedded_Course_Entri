/*Requirement

Write a C program to replace a specified number of bits in the first integer with bits from a second integer while keeping the remaining bits unchanged

Design

Read two integers, the starting bit position and the number of bits to replace
Create a mask for the required number of bits
Clear the selected bits in the first integer
Extract the required bits from the second integer and insert them into the first integer
Display the final result

Code*/

#include <stdio.h>

int main()
{
    unsigned int m, l, n, p, mask;

    printf("Enter two integers: ");
    scanf("%u %u", &m, &p);

    printf("Enter starting bit position: ");
    scanf("%u", &l);

    printf("Enter number of bits to replace: ");
    scanf("%u", &n);

    mask = (1U << n) - 1;

    m = (m & ~(mask << l)) | ((p & mask) << l);

    printf("Result = %u", m);

    return 0;
}
/* Enter two integers: 2 4
Enter starting bit position: 0
Enter number of bits to replace: 1
Result = 2 */