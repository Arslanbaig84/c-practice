// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool small_letter(string password);
bool capital_letters(string password);
bool numbers(string password);
bool special_characters(string password);
bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

bool small_letter(string password)
{
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= 97 && password[i] <= 122)
        return true;
    }
    return false;
}
bool capital_letters(string password)
{
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= 65 && password[i] <= 90)
        return true;
    }
    return false;
}
bool numbers(string password)
{
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= 48 && password[i] <= 57)
        return true;
    }
    return false;
}
bool special_characters(string password)
{
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= 33 && password[i] <= 47)
        return true;
    }
    return false;
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    if (small_letter(password) && capital_letters(password) && numbers(password) && special_characters(password))
    {
        return true;
    }
    else
    {
        return false;
    }
}
