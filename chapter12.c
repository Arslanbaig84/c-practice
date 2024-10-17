#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char c[100];

// for getting sentences as input
// printf("Type in a string of words and I will tell you how many words there are.\n");
// fgets(c, 100, stdin);

//program to store digits in string and summing them up
//    printf("type in digits & I will tell you their sum.\n");
//    scanf("%s", c);
//    int sum = 0;
//
//    for (int i = 0; i < strlen(c); i++)
//    {
//        sum += (c[i] - '0');
//    }
//    printf("%i\n", sum);

// toupper first letter of a each sentence
//    for (int i = 0; i < strlen(c); i++)
//    {
//        if (c[0] >= 97 && c[0] <= 122)
//        {
//            c[0] = c[0] - 32;
//        }
//        if ((c[i] == '.' || c[i] == '?' || c[i] == '!') && (c[i + 1] == ' ' && c[i + 2] >= 97 && c[i + 2] <= 122))
//       {
//            c[i + 2] = c[i + 2] - 32;
//        }
//    }
//    printf("%s\n", c);

//    int word_counter = 0;
//    int letter_counter = 0;
// word counter & average number off letters per word
//    for (int i = 0; i < strlen(c); i++)
//    {
//        letter_counter++;
//        if (c[i] == ' ' || c[i] == '\n')
//        word_counter++;
//    }
//
//    float average = (float)letter_counter / word_counter;
//
//    printf("No of words in sentence are: %i\n", word_counter);
//    printf("Average number of letters/word in sentence are: %.2f\n", average);
}