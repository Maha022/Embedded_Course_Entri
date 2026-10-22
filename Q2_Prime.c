/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* Requirement:

Write a C program to check whether a number is prime or not.
prime number is greater than 1 and divisible only by 1 and itself.

Design :

Start.
Read a number m.
If m < 2, it is not prime.
Otherwise, check divisibility from 2 to m-1.
If divisible, print not prime; otherwise, print prime.
Stop */

//code

#include <stdio.h>

int main()
{
    int m,i,Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &m);

    if (m < 2)
    {
        Prime = 0;
    }
    else
    {
        for (i = 2; i <= m / i; i++)
        {
            if (m % i == 0)
            {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime == 1)
    {
        printf("%d is a prime number.\n",m);
    }
    else
    {
        printf("%d is not a prime number.\n",m);
    }

    return 0;
}
/* Test : 
Enter a number:
11 is a prime number*/