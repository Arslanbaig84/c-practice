#include <stdio.h>
#include <cs50.h>

int main (void)
{
    const int suites = 120;
    int i;
    int floor[20];

    for (i = 10; i <= 16; i++)
    {
    do
    {
    if (i == 13)
    continue;
    floor[i] = get_int("occupancy on %i floor: ", i);
    }
    while (floor[i] < 0 || floor[i] > 20);
    }

    int total = floor[10] + floor[11] + floor[12] + floor[14] + floor[15] + floor[16];
    printf("Total Occupancy: %i\n", total);

    float percentage_occupancy = 100.00*total/suites;
    printf("Percentage Occupancy = %.2f\n", percentage_occupancy);
}