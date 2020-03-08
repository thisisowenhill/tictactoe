// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

char board[3][3] = { '1', '2', '3',
                    '4', '5', '6',
                    '7', '8', '9'};


int main()
{
    int x, y;
    for (x = 0; x <= 2; x++)
    {
        for (y = 0; y <= 2; y++) {
            cout << board[x][y] << " ";
        }
        cout << "\n";
    }
    char text;
    bool tests = true;
    char player = 'X';
	cout << "What digit would you like to replace?:";
    cin >> text;
    if (text!= NULL) {
        while (tests == true) {
			for (x = 0; x <= 2; x++)
            {
				for (y = 0; y <= 2; y++) {
                    if (text == board[x][y]) {
                        board[x][y] = player;
                        tests = false;
                    }
					cout << board[x][y] << " ";
				}
				cout << "\n";
			}
        }

    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
