#include <stdio.h>

int main()
{
    //prompting user for height
    int height;
    do
    {
    printf("height of pyramid: ");
    scanf("%i", &height);
    }
    while (height < 2 || height > 9);

    //looping for rows
    for (int i = 0; i < height; i++)
    {
        //looping for intital space
        for (int j = height - i; j >= 0; j--)
        {
            printf(" ");
        }

        // looping for # symbols
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        //looping for 2nd spaces
        for (int j = 0; j < 1; j++)
        {
            printf(" ");
        }

        //looping for 2nd set of # symbols
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
    printf("\n");
    }
}