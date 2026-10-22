/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Requirement
Write a C program using separate functions to perform addition, subtraction, multiplication and division on two floating-point numbers, with proper handling of division by zero

Design

Read two numbers and arithmetic operator from user
Use separate function to perform each arithmetic operation
Use selector function to call correct operation based on operator
Check for division by zero before performing division
Display the result or error message */

//Code

#include <stdio.h>

float add(float m, float l)
{
    return m + l;
}

float subtract(float m, float l)
{
    return m - l;
}

float multiply(float m, float l)
{
    return m * l;
}

float divide(float m, float l)
{
    if (m == 0)
    {
        printf("Division by zero is not allowed");
        return 0;
    }
    return m / l;
}

float calculate(float m, float l, char op)
{
    switch (op)
    {
        case '+': return add(m, l);
        case '-': return subtract(m, l);
        case '*': return multiply(m, l);
        case '/': return divide(m, l);
        default: return 0;
    }
}

int main()
{
    float m, l, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &m, &l);

    printf("Enter an operator: ");
    scanf(" %c", &op);

    if (op == '/' && l == 0)
    {
        divide(m, l);
    }
    else if (op == '+' || op == '-' ||
             op == '*' || op == '/')
    {
        result = calculate(m, l, op);
        printf("Result = %.2f", result);
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;
} 
/* Test :
Enter two numbers: 2 6
Enter an operator: +
Result = 8.00 
Enter two numbers: 2 6
Enter an operator: -
Result = -4.00
Enter two numbers: 2 6
Enter an operator: *
Result = 12.00 */