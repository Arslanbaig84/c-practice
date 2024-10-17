#include <stdio.h>
#include <stdlib.h>

int generate_computer_choice();
int get_human_choice();
int main()
{
    const char* s[] = {" ", "rock", "paper", "scissor"};
    printf("Let's play Rock Paper Scissor");
    int human_score = 0;
    int computer_score = 0;

    do
    {
        int computer_choice = generate_computer_choice();
        int human_choice = get_human_choice();

        if (computer_choice == human_choice)
        {
            printf("round is tied\n");
        }
        else if ((computer_choice == 1 && human_choice == 3) || (computer_choice == 2 && human_choice == 1) || (computer_choice == 3 && human_choice == 2))
        {
            printf("You lose. Human Choice: %s, Computer Choice: %s\n", s[human_choice], s[computer_choice]);
            computer_score++;
        }
        else
        {
            printf("You win. Human Choice: %s, Computer Choice: %s\n", s[human_choice], s[computer_choice]);
            human_score++;
        }
        printf("Human Score: %i, Computer Score: %i\n", human_score, computer_score);
        }
        while (human_score < 5 && computer_score < 5);

}

int generate_computer_choice()
{
    int computer_choice = (rand() % 3) + 1;
    //printf("%i\n", computer_choice);
    return computer_choice;
}

int get_human_choice()
{
    int human_choice;
    do
    {
        printf("enter your choice(1 - 3): ");
        scanf("%i", &human_choice);
    }
    while(human_choice < 1 || human_choice > 3);
    return human_choice;
}