/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* Requirement
Write a C program using a function to convert a decimal number to any base between 2 and 16. Use letters A–F for values 10–15.
 Design

Start
Read a decimal number and target base
Call a function to convert the number using repeated division
Store the remainders in an array
Print the remainders in reverse order, using A–F for values above 9
Stop */

// Code

#include <stdio.h>

void convert(int n, int base)
{
    char result[32];
    int i = 0, r;

    if (n == 0)
    {
        printf("0");
        return;
    }

    while (n > 0)
    {
        r = n % base;

        if (r < 10)
            result[i] = r + '0';
        else
            result[i] = r - 10 + 'A';

        i++;
        n = n / base;
    }

    while (i > 0)
        printf("%c", result[--i]);
}

int main()
{
    int n, base;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Enter base (2-16): ");
    scanf("%d", &base);

    if (n < 0 || base < 2 || base > 16)
        printf("Invalid input");
    else
    {
        printf("Converted number: ");
        convert(n, base);
    }

    return 0;
}
/* Test :
Enter a decimal number: 20
Enter base (2-16): 8
Converted number: 24 */