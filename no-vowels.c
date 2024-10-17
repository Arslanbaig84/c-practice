// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("need user input\n");
        return 1;
    }

    string s = argv[1];

    for (int i = 0 ; i < strlen(s); i++)
    {
        s[i] = tolower(s[i]);

        switch(s[i])
        {
            case 'a':
            s[i] = '6';
            break;

            case 'e':
            s[i] = '3';
            break;

            case 'i':
            s[i] = '!';
            break;

            case 'o':
            s[i] = '0';
            break;
        }
    }

    printf("%s\n", s);
}
