/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*
Requirement:

Write a C program to generate the Fibonacci series.
Read the number of terms n from the user.
Start the series with 0 and 1.
Display the series up to n terms.

Design:


Start
Read the number of terms n
Initialize m = 0 and l = 1
Repeat n times:
   Print m.
   Calculate c = m + l
   Update m = l and l = c
   Stop */

// Code


#include <stdio.h>

int main()
{
    int n, i, m = 0, l = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("Enter a positive number\n");
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", m);
            c = m + l;
            m = l;
            l = c;
        }
    }

    return 0;
}
/* Test : 
Enter num of terms:3 
0 1 1
Enter num of terms:0 
Enter a positive number */
