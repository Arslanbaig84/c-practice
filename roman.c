#include <stdio.h>

int main()
{
    int user_input;
    char roman[20][6] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII", "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX"};

    //for (int i = 0; i < 20; i++)
    //{
        //printf("Enter Roman Numeral for %i: ", i + 1);
        //scanf("%s", roman[i]);
    //}

    do
    {
        printf("Enter an integer: ");
        scanf("%i", &user_input);

        printf("Roman numeral for %i: %s\n", user_input, roman[user_input - 1]);
    }
    while (user_input > 0 && user_input < 20);
}