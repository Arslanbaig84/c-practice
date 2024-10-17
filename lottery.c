#include <stdio.h>

//function prototypes for factorial & probability

int factorial(int);
void probability(int);

int main()
{
    //defining variables for lottery
    int num, choices;
    do
    {
        printf("How many numbers to choose between 1 - 12: ");
        scanf("%i", &num);

        printf("How many times do you need to choose: ");
        scanf("%i", &choices);
    }
    while((num < 1 || num > 12) || (choices < 1 || choices > 5));

    //defining possibilites
    int possibilities;

    possibilities = factorial(num)/(factorial(choices) * factorial(num - choices));
    printf("chances of winning are 1 in %i\n", possibilities);

    //probability of winning
    probability(possibilities);

}

//defining factorial
int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
    printf("%i\n", fac);
}

//calculating probability
void probability(int n)
{
    float probability;
    probability = 1.00/n;
    printf("Winning Chances: %f\n", probability);
}