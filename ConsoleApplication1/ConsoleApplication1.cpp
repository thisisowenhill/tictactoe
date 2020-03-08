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