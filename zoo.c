#include <stdio.h>

int main()
{
    int monkeys = 3;
    int days = 7;
    int monkey_food[monkeys][days];

    for (int i = 0; i < monkeys; i++)
    {
        for (int j = 0; j < days; j++)
        {
            //filling out the 2d array with food eaten by each monkey each day
            printf("Food eaten by monkey %i on day %i: ", i, j + 1);
            scanf("%i", &monkey_food[i][j]);
        }
    }

    //calculating total food eaten by all monkeys in the week
    int total_food = 0;

    for (int i = 0; i < monkeys; i++)
    {
        for (int j = 0; j < days; j++)
        {
            total_food += monkey_food[i][j];
        }
    }
    //calculating & printing average
    int average = total_food/(monkeys*days);
    printf("Average food eaten by each monkey per day: %i\n", average);

    //calculating food eaten by each monkey in the week individually

    int monkey_total[monkeys];
    for (int i = 0; i < monkeys; i++)
    {
        monkey_total[i] = 0;
        for (int j = 0; j < days; j++)
        {
            monkey_total[i] += monkey_food[i][j];
        }
    }

    //calculating least food intake by any monkey
    int lowest = monkey_total[0];
    int highest = monkey_total[0];

    for (int i = 0; i < monkeys; i++)
    {
        if (monkey_total[i] < lowest)
        {
            lowest = monkey_total[i];
        }
    }
    printf("Least amount of food taken by monkey : %i\n", lowest);

    //calculating highest food intake by any monkey

    for (int i = 0; i < monkeys; i++)
    {
        if (monkey_total[i] > highest)
        {
            highest = monkey_total[i];
        }
    }
    printf("Most amount of food taken by monkey : %i\n", highest);
}