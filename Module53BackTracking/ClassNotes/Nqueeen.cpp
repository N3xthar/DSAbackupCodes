#include <iostream>
#include <vector>
using namespace std;

// Function to check if it's safe to place a queen at board[row][col]
bool isSafe(vector<vector<int>> &board, int row, int col, int n)
{
    // Check same row on left side
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 1)
            return false;
    }

    // Check upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
            return false;
    }

    // Check lower-left diagonal
    for (int i = row, j = col; i < n && j >= 0; i++, j--)
    {
        if (board[i][j] == 1)
            return false;
    }

    // Safe position
    return true;
}

// Recursive function to solve N-Queens using backtracking
bool solveNQueen(vector<vector<int>> &board, int col, int n)
{
    // Base condition: all queens are placed
    if (col >= n)
        return true;

    // Try placing queen in each row of this column
    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 1; // Place the queen

            // Recur for next column
            if (solveNQueen(board, col + 1, n))
                return true;

            // BACKTRACK: remove the queen
            board[row][col] = 0;
        }
    }

    // No valid position found in this column
    return false;
}

int main()
{
    cout << "Welcome to the Backtracking Questions, dude!!!\n";

    int n = 4;
    vector<vector<int>> board(n, vector<int>(n, 0));

    if (solveNQueen(board, 0, n))
    {
        cout << "Solution exists, dude!\n\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << board[i][j] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists, dude.\n";
    }

    return 0;
}

