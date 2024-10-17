#include <stdio.h>

// Declare a 3x3 grid to represent the Tic-Tac-Toe board
char board[3][3];

// Function to initialize the board to empty cells
void init_board()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = '-';
        }
    }
}

// Function to print the board
void print_board()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to check if a player has won
char check_win()
{
    int i;

    // Check rows
    for (i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return board[i][0];
        }
    }

    // Check columns
    for (i = 0; i < 3; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
            return board[0][i];
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return board[0][2];
    }

    // If there are no empty cells, it's a tie
    for (i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != '-') {
                return '-';
            }
        }
    }

    // If there are still empty cells, the game isn't over yet
    return ' ';
}

int main()
{
    int row, col, player = 1;
    char mark, winner;

    // Initialize the board
    init_board();

    // Game loop
    while (1)
    {
        // Print the board
        printf("\n");
        print_board();

        // Get player's move
        printf("\nPlayer %d, enter row (1-3) and column (1-3) to mark your move: ", player);
        scanf("%d %d", &row, &col);

        // Check if the move is valid
        if (row < 1 || row > 3 || col < 1 || col > 3) {
            printf("Invalid move. Row and column must be between 1 and 3.\n");
            continue;
        }
        if (board[row-1][col-1] != '-') {
            printf("Invalid move. Cell is already occupied.\n");
            continue;
        }

        // Mark the cell with the player's mark ('X' or 'O')
        if (player == 1)
        {
            mark = 'X';
        }
        else
        {
            mark = 'O';
        }
        board[row-1][col-1] = mark;

        // Check if the game is over
        winner = check_win();
        if (winner == 'X')
        {
            printf("\nPlayer 1 wins!\n");
            break;
        }
        else if (winner == 'O')
        {
            printf("\nPlayer 2 wins!\n");
            break;
        }
        else if (winner == '-' && player == 2)
        {
            printf("\nIt's a tie!\n");
            break;
        }

        // Switch to the other player
        if (player == 1)
        {
            player = 2;
        }
        else
        {
            player = 1;
        }
    }

    // Print the final board
    printf("\n");
    print_board();

    return 0;
}
