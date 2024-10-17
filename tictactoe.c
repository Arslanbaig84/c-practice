#include <stdio.h>
#include <cs50.h>

char board[3][3] = {{'*', '*', '*'}, {'*', '*', '*'}, {'*', '*', '*'}};


void print_board();
char find_result(char arr[][3], int );

int main()
{
    int player = 1;
    print_board();

    while(1)
    {
        char result = find_result(board, 3);

        if (result == 'X')
        {
            printf("Player 1 Wins\n");
            break;
        }

        if (result == 'O')
        {
            printf("Player 2 Wins\n");
            break;
        }

        if (result == ' ')
        {
            printf("Game is a Tie\n");
            break;
        }

        {
            int row;
            int column;

            // prompting user input for the move

            printf("Player %i Enter row no ", player);
            scanf("%i", &row);

            printf("Player %i Enter column no ", player);
            scanf("%i", &column);

            if (row < 1 || row > 3 || column < 1 || column > 3)
            {
                printf("Invalid move. row & column should be (1 - 3)\n");
                continue;
            }

            if (board[row - 1][column - 1] != '*')
            {
                printf("Invalid move. Cell is already occupied.\n");
                continue;
            }

            //populating array as per user input
            if (player == 1)
            {
                board[row - 1][column - 1] = 'X';
            }

            if (player == 2)
            {
                board[row - 1][column - 1] = 'O';
            }

            //printing board to check move
            print_board();

        }
            if (player == 1)
            {
                player = 2;
            }
            else
            {
                player = 1;
            }
    }
}

//printing board
void print_board()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

//checking if a player has won
char find_result(char arr[][3], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
        {
            return arr[i][0];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
        {
            return arr[0][i];
        }
    }

    if ((arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) || (arr[2][0] == arr[1][1] && arr[1][1]  == arr[0][2]))
    {
        return arr[1][1];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] == '*')
            return '*';
        }
    }
    return ' ';
}