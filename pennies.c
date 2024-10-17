#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // initiate const 1st day salary, number of days, incremental salary & sum
    const float salary = 0.01;
    float n;
    float s = 0;
    float sum = 0;

    //prompt for number of days

    do
    {
        n = get_float("No of days worked: ");
    }
    while (n < 1 || n > 31);

    //incremental salary loop

    for
    (int i = 0; i < n; i++)
    {
        s = (pow(2, i)) * salary;
        printf("salary each day = %.2f\n", s);
    }

    //monthly salary calculation

    {
        sum = sum + ((pow(2, n)) * salary - salary);
        printf("Total Salary = %.2f\n", sum);
    }
}