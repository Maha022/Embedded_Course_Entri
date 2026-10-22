/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Requirement
Write C program using function to check whether given positive integer is Perfect Number or not

Design
1. Start
2. Read a positive integer
3. Call a function to find the sum of its proper divisors
4. If the sum equals the number, print->Perfect Number
  otherwise, print-> Not a Perfect Number
5. Stop */

// Code 

#include <stdio.h>

int isPerfect(int m)
{
    int sum = 0, i;

    for (i = 1; i < m; i++)
    {
        if (m % i == 0)
            sum += i;
    }

    return sum == m;
}

int main()
{
    int m;

    printf("Enter integer: ");
    scanf("%d", &m);

    if (m > 0 && isPerfect(m))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
/* Test :
Enter integer : 39 
Not a Perfect number */