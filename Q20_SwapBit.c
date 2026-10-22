/* Requirement

Write a C program to swap n consecutive bits between two integers starting from a given bit position while keeping the remaining bits unchanged

Design

Read two integers, the starting bit position and the number of bits to swap
Create a mask to select the required bits in both integers
Extract the selected bits and exchange them using bitwise operators
Display both integers after swapping

Code */ 


#include <stdio.h>

int main()
{
    unsigned int m, l, p, n, mask, x, y;

    printf("Enter two integers: ");
    scanf("%u %u", &m, &p);

    printf("Enter starting bit position: ");
    scanf("%u", &l);

    printf("Enter number of bits to swap: ");
    scanf("%u", &n);

    mask = (1U << n) - 1;

    x = (m >> l) & mask;
    y = (p >> l) & mask;

    m = (m & ~(mask << l)) | (y << l);
    p = (p & ~(mask << l)) | (x << l);

    printf("First number after swap = %u\n", m);
    printf("Second number after swap = %u\n", p);

    return 0;
}
/* Enter two integers: 2 4
Enter starting bit position: 2
Enter number of bits to swap: 2
First number after swap = 6
Second number after swap = 0  */