/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Requirement
Write a C program to calculate the factorial of a number
Read an integer from the user
Multiply all integers from 1 to the given number
The factorial of 0 is 1

Design:

Start.
Read a number m.
Initialize factorial = 1.
If m is negative, display an error message.
Otherwise, multiply numbers from 1 to m.
Display the factorial.
Stop.
*/

//Code

#include <stdio.h>

int main()
{
    int m,i;
    unsigned int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &m);

    if (m < 0)
    {
        printf("Factorial is not defined for negative numbers\n");
    }
    else if (m > 20)
    {
        printf("Number is too large to calculate using this data type\n");
    }
    else
    {
        for (i = 1; i <=m; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %d\n",m, factorial);
    }

    return 0;
}
/* Test :
Enter a positive integer: 3 
Factorial of 3 = 6 or 
Enter a positive integer: 0 
Factorial of 0 = 1 or 
Enter a positive integer: -4 
Factorial is not defined for negative numbers */