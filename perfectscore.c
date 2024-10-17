#include <stdio.h>

int count_perfect(int arr[], int size);
int main()
{
    int score[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the score for candidate %i: ", i+1);
        scanf("%i", &score[i]);

        while (score[i] < 0 || score[i] > 100)
        {
            printf("score should be between 1 - 100\n");
            printf("Reenter the score for candidate %i: ", i+1);
            scanf("%i", &score[i]);
        }
    }

    int full_score = count_perfect(score, 10);
    printf("No of students getting full marks: %i\n", full_score);
    return 0;

}

int count_perfect(int arr[], int size)
{
    int highest_score_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 100)
        {
            highest_score_count++;
        }
    }
    return highest_score_count;
}