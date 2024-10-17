#include <stdio.h>

void displaymenu();
int getchoice();
void showfees(char *membertype, double rate, int months);

int main()
{
    // constant monthly membership rates
    const double adult = 120.00;
    const double child = 60.00;
    const double senior = 100.00;

    //declaration of choice & timeframe
    int choice, months;

    do
    {
        displaymenu();
        choice = getchoice();

        if (choice != 4)
        {
            printf("For how many months you want the membership.\n");
            scanf("%i", &months);

            switch(choice)
            {
                case 1:
                showfees("Adult", adult, months);
                break;

                case 2:
                showfees("Child", child, months);
                break;
                case 3:
                showfees("Senior", senior, months);
                break;
            }
        }
    }
    while(choice != 4);
    return 0;
}

void displaymenu()
{
    printf("Health club Membership Menu\n");
    printf("1. Adult Memberhsip\n");
    printf("2. Child Membership\n");
    printf("3. Senior Citizen Membership\n");
    printf("4. Quit the programme\n");
}

int getchoice()
{
    int choice;
    do
    {
        printf("Please enter your membership preference: ");
        scanf("%i", &choice);
    }
    while(choice < 1 || choice > 4);
    return choice;
}

void showfees(char *membertype, double rate, int months)
{
    printf("Membership: %s\n", membertype);
    printf("No of Months: %i\n", months);
    printf("Total Chrges: %f\n", (rate * months));
}