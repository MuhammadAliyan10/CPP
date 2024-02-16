#include <iostream>
#include <vector>

// Function to draw the Tic-Tac-Toe board
void drawBoard(const std::vector<std::vector<char>> &board)
{
    std::cout << "-------------" << std::endl;
    for (int i = 0; i < 3; ++i)
    {
        std::cout << "| ";
        for (int j = 0; j < 3; ++j)
        {
            std::cout << board[i][j] << " | ";
        }
        std::cout << std::endl
                  << "-------------" << std::endl;
    }
}

// Function to check if a player has won the game
bool checkWin(const std::vector<std::vector<char>> &board, char player)
{
    // Check rows
    for (int i = 0; i < 3; ++i)
    {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }

    // Check columns
    for (int j = 0; j < 3; ++j)
    {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
            return true;
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

int main()
{
    // Initialize the board
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' '));

    // Variable to keep track of the current player ('X' or 'O')
    char currentPlayer = 'X';

    // Main game loop
    while (true)
    {
        // Draw the board
        drawBoard(board);

        // Get the current player's move
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter your move (row [1-3] and column [1-3]): ";
        std::cin >> row >> col;

        // Convert to 0-based indexing
        --row;
        --col;

        // Check if the move is valid
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
        {
            std::cout << "Invalid move! Try again." << std::endl;
            continue;
        }

        // Update the board with the current player's move
        board[row][col] = currentPlayer;

        // Check if the current player has won
        if (checkWin(board, currentPlayer))
        {
            std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            break;
        }

        // Check if the game is a tie
        bool isTie = true;
        for (const auto &row : board)
        {
            for (char cell : row)
            {
                if (cell == ' ')
                {
                    isTie = false;
                    break;
                }
            }
            if (!isTie)
                break;
        }
        if (isTie)
        {
            std::cout << "It's a tie!" << std::endl;
            break;
        }
        // Switch to the other player
        if (currentPlayer == 'X')
            currentPlayer = 'O';
        else
            currentPlayer = 'X';
    }

    return 0;
}
