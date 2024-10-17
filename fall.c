#include <stdio.h>
#include <math.h>

const float g = 9.8;

void distance(int time);

int main()
{
    for (int t = 1; t <= 10; t++)
    {
        distance(t);
    }
}

void distance(int time)
{
    float distance = 0.5 * g * pow(time, 2);
    printf("%.2f\n", distance);
}