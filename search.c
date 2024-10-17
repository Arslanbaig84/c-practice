#include <stdio.h>
#include <cs50.h>

int search(int arr[], int size, int number);
int main()
{
    int lottery_numbers[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int winning_number;

    printf("What is the winning number: ");
    scanf("%i", &winning_number);

    int position = search(lottery_numbers, 10, winning_number);

    if (position == -1)
    {
        printf("You did not win. Better luck next time.\n");
    }
    if (position != -1)
    {
        printf("You won. Lottery number %i matches the lottery number\n", position);
    }
}

int search(int arr[], int size, int number)
{
    int position = -1;
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (found == false)
        {
            if(number == arr[i])
            {
                position = i;
                found = true;
            }
        }
    }
    return position;
}