/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Requirement :
Write a C program to check whether a given integer is even or odd.
Read an integer from the user.
If the number is divisible by 2, display even; otherwise, display odd.

Design : 

Start.
Declare an integer variable m.
Read the number.
Check whether m % 2 == 0.
If true, print even; otherwise, print odd.
Stop */

// code

#include <stdio.h>

int main()
{
    int m;

    printf("Enter a number: ");
    scanf("%d", &m);

    if (m % 2 == 0)
    {
        printf("%d is an even number.\n",m);
    }
    else
    {
        printf("%d is an odd number.\n",m);
    }

    return 0;
}

/* Test : Enter a number : 22
22 is an even number
*/

