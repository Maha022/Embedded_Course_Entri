/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Requirement : 
Write C program using function to count frequency of each digit (0–9) in a given integer using an array and pointers

 Design:
Start
Read the integer
Initialize  frequency array with zero
Call  function to count each digit and update array using pointer
Then print freq of each digit
Stop */

// Code

#include <stdio.h>

void countDigits(int n, int freq[])
{
    int digit;

    if (n == 0)
        freq[0]++;

    while (n != 0)
    {
        digit = n % 10;
        if (digit < 0)
            digit = -digit;

        freq[digit]++;
        n = n / 10;
    }
}

int main()
{
    int n, i;
    int freq[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &n);

    countDigits(n, freq);

    for (i = 0; i < 10; i++)
        printf("%d visible %d times\n", i, freq[i]);

    return 0;
}
/*
Test :

Enter an integer: 112223333
0 visible 0 times
1 visible 2 times
2 visible 3 times
3 visible 4 times */