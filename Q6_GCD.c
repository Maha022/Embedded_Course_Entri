/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Requirement
 Write  C program using recursive function to find the GCD (Greatest Common Divisor) of two positive integers using the Euclidean algorithm
 
Design

Start
Read two positive integers
Call a recursive function to find the GCD
If the second number is zero, return the first number
Otherwise, call the function with the second number and the remainder
Display the GCD
Stop */

// Code 

#include <stdio.h>

int gcd(int m, int l)
{
    if (l == 0)
        return m;
    else
        return gcd(l, m % l);
}

int main()
{
    int m, l;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &l);

    printf("GCD = %d", gcd(m, l));

    return 0;
} 
/* Test :
Enter 2 integers : 2 4 
2 -> GCD */ 