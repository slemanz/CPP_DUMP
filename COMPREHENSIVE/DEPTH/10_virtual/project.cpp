/*
    A tic-tac-toe game

    A general overview is that you have a grid and 2 players. One player
    draws X's on the grid and the other player draws O's. The players take turns
    choosing a spot on the grid to draw their X or O and the first player to
    connect 3 of their characters in a row, column or diagonal wins.

    Things you will need to use
    - A 2d array or an array of strings (can be dynamic or not)
    - Both While and possibly For loops
    - Conditional Statements (if, else if, else)
    - User Input and Output
 */

#include <iostream>
#include <iomanip>

/*
    This function prints the
    gameboard
*/
void printBoard(char board[][3])
{
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            std::cout << std::setw(2) << board[r][c];
        }
        std::cout << std::endl;
    }
}

int main(void)
{
    bool gameOver = false;
    int row = 1;
    int col = 1;
    char players[2] = {'X', 'O'};
    int numTurns = 0;
    
    // initialize gameboard with empty '-'
    char board[3][3] = {
        {'-' , '-', '-'},
        {'-' , '-', '-'},
        {'-' , '-', '-'}
    };

    std::cout << "Welcome to the game of tic-tac-toe" << std::endl;
    std::cout << "Enter '0' for row if you want to quit" << std::endl;
    do
    {   
        std::cout << players[numTurns%2] << "'s turn" << std::endl;
        std::cout << "Current Game Board:" << std::endl;
        printBoard(board);
        std::cout << "Enter a row: ";
        std::cin >> row;

        if(row == 0)
        {
            exit(0);
        }
    }while(1);

    return 0;
}