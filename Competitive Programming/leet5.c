/*
Divide two numbers without using /, %, *.

Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.
*/

#include <stdio.h>

int divide_num(int divid, int disor)
{
    int sign = 0;
    if(divid < 0 && disor < 0)
    {
        sign = -1;
    }
    else
    {
        sign = 1;
    }

    int Q = 0; //Quotient
    while (divid >= disor)
    {
        divid -= disor;
        Q++;
    }
    return Q*sign;
}

int main()
{
    int dividend, divisor;

    printf("Enter dividend and divisorn\n");
    scanf("%d %d", &dividend, &divisor);

    int res = divide_num(dividend, divisor);
    printf("%d", res);
    return 0;
}