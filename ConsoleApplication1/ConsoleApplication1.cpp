#include <iostream>
#include <string>
using namespace std;

char board[3][3] = { '1', '2', '3',
                    '4', '5', '6',
                    '7', '8', '9'};

bool drawBoard(int moves) {
    int x, y;
    bool winner = false;
    for (x = 0; x <= 2; x++)
    {
        for (y = 0; y <= 2; y++) {
            cout << board[x][y] << " "; // Loop through the 2D array and drawing the board.
        }
        cout << "\n";
    }cout << "\n";

    //Row Checks
    for (int r = 0; r <= 2; r++)
    {
        if (board[r][0] == 'X' && board[r][1] == 'X' && board[r][2] == 'X') {
            winner = true;
            cout << "Player X wins!";
        }
        else if (board[r][0] == 'O' && board[r][1] == 'O' && board[r][2] == 'O') {
            winner = true;
            cout << "Player O wins!";
        }
    }
    //Vertical Checks
    for (int v = 0; v <= 2; v++) {
        if (board[0][v] == 'X' && board[1][v] == 'X' && board[2][v] == 'X') {
            winner = true;
            cout << "Player X wins!";
        }
        else if (board[0][v] == 'O' && board[1][v] == 'O' && board[2][v] == 'O') {
            winner = true;
            cout << "Player O wins!";
        }
    }

    //Diagonal Checks (help)
    // Check '\'
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
        winner = true;
        cout << "Player X wins!";
    }
    else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
        winner = true;
        cout << "Player O wins!";
    }

    // Check '/'
    if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') {
        winner = true;
        cout << "Player X wins!";
        
    }
    else if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
        winner = true;
        cout << "Player O wins!";
    }

    if (moves >= 9) {
        winner = true;
        cout << "G A M E  O V E R";
    }

    return winner;
}

int main()
{
    int moves = 0;
    char text;
    char player = 'X';

    while (!drawBoard(moves)) {
        cout << player << " - " << "What digit would you like to replace?: ";
        cin >> text;
        
        if (text != NULL) {
            if (player == 'X') {
                while (player == 'X') {
                    for (int x = 0; x <= 2; x++) {
                        for (int y = 0; y <= 2; y++) {
                            if (text == board[x][y] && board[x][y] != 'X' && board[x][y] != 'O') {
                                board[x][y] = player;
                                player = 'O';
                                moves++;
                                break;
                            }
                        }
                    }
                    cout << "\n";//drawBoard();
                }
            }
            else if (player == 'O') {
                while (player == 'O') {
                    for (int x = 0; x <= 2; x++) {
                        for (int y = 0; y <= 2; y++) {
                            if (text == board[x][y]) {
                                board[x][y] = player;
                                moves++;
                                player = 'X';
                                break;
                            }
                        }
                    }
                    cout << "\n";//drawBoard();
                }
            }
        }
        else { cout << "Invalid."; 
        }
    return 0;
}