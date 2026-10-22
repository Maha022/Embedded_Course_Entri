
/* Requirement

Define a structure named Complex with real and imaginary parts and write a C program to add two complex numbers using functions

Design

Define a structure with real and imaginary members
Read two complex numbers from the user
Use a function to add their real and imaginary parts separately
Use another function to display the result in complex number format

Code */

#include <stdio.h>

struct Complex
{
    float real, imag;
};

struct Complex add(struct Complex m, struct Complex l)
{
    struct Complex result;

    result.real = m.real + l.real;
    result.imag = m.imag + l.imag;

    return result;
}

void display(struct Complex m)
{
    printf("%.2f + %.2fi", m.real, m.imag);
}

int main()
{
    struct Complex m, l, result;

    printf("Enter first complex number (real imaginary): ");
    scanf("%f %f", &m.real, &m.imag);

    printf("Enter second complex number (real imaginary): ");
    scanf("%f %f", &l.real, &l.imag);

    result = add(m, l);

    printf("Sum = ");
    display(result);

    return 0;
}
/* Enter first complex number (real imaginary): -11 22
Enter second complex number (real imaginary): 31 39
Sum = 20.00 + 61.00i
 */