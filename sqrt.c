#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    double number;

    for (int i = 0; i < 5; i++)
    {
    number = get_double("Type a positive number to calculate its square root: ");

        if (number >= 0.0)
        {
        printf("The square root of 'number' is : %.3f\n", sqrt(number));
        }
        else
        {
        printf("Can't calculate square root of a -ve number. Terminating.\n");
        break;
        }
    }
    return 0;
}