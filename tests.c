#include <stdio.h>
#include <stdlib.h>

void ascending(int arr[], int size);
int calculate_average(int arr[], int size);

int main()
{
    int tests;

    printf("How many tests did the student take?\n");
    scanf("%i", &tests);

    int *scores = malloc(tests * sizeof(int));

    for (int i = 0; i < tests; i++)
    {
        do
        {
            printf("Score in test %i: ", i+1);
            scanf("%i", scores + i);
        }
        while(scores[i] < 0);
    }

    ascending(scores, tests);

    printf("Here are scores in ascending order.\n");

    for (int i = 0; i < tests; i++)
    {
        printf("%i, ", scores[i]);
    }
    printf("\n");

    int average_scores = calculate_average(scores, tests);
    printf("Average score of Student: %i\n", average_scores);

    free(scores);
    return 0;

}

void ascending(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int calculate_average(int arr[], int size)
{
    int average;
    int total = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        total += arr[i];
        count++;
    }

    average = total / count;
    return average;
}