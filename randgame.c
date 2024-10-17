#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    // getting a random number between 1 & 100
    srand(time(0));
    int n = rand() % 100;

    //declaring number for user to guess
    int o;

    //declaring score
    int score = 0;

    do {
        o = get_int("Guess random number between 1 - 99: ");
        score ++;
        printf("counter = %i\n", score);
    }
    while (n != o);

    if (n == o)
    printf("you win\n");
}