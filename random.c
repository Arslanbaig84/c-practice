#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    //creating different random number
    srand(time(0));

    for (int i = 0; i < 5; i++)
    printf("%d\n", rand());

    //creating fixed random number

    int n = rand();

    for (int i = 0; i < 5; i++)
    printf("%i\n", n);
}