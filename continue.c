#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int numdvds = get_int("How many dvds did you rent: ");
    double total = 0.0;
    char current;
    for (int dvdcount = 1; dvdcount <= numdvds; dvdcount++)
    {
        if (dvdcount %3 == 0)
        {
            printf("Every 3rd dvd rental is free.\n");
            continue;
        }
        else
        current = get_char("Is it new release(y/n): ");
        if
        ((current == 'y') || (current == 'Y'))
        total += 3.50;
        else
        total += 2.50;
    }
    printf("The total is $ %.2f\n", total);
}