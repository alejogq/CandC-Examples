#include <iostream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char currentPlayer;

public:
    TicTacToe() : currentPlayer('X') {
        // Initialize the board with empty spaces
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                board[i][j] = ' ';
            }
        }
    }

    void printBoard() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    char checkWinner() {
        // Check rows
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
                return board[i][0];
            }
        }

        // Check columns
        for (int j = 0; j < 3; ++j) {
            if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') {
                return board[0][j];
            }
        }

        // Check diagonals
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
            return board[0][0];
        }
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
            return board[0][2];
        }

        return ' ';
    }

    bool isBoardFull() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

    void makeMove(int row, int col) {
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move! Try again." << endl;
            return;
        }
        board[row][col] = currentPlayer;
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    void getUserMove() {
        int row, col;
        cout << "Enter row and column (0-2) to place your mark: ";
        cin >> row >> col;
        makeMove(row, col);
    }

    void getComputerMove() {
        int row, col;
        do {
            row = rand() % 3;
            col = rand() % 3;
        } while (board[row][col] != ' ');
        makeMove(row, col);
    }

    void play() {
        cout << "Welcome to Tic-Tac-Toe! You are playing against the computer." << endl;
        while (true) {
            system(CLEAR_COMMAND);
            printBoard();

            getUserMove();
            if (checkWinner() == 'X') {
                system(CLEAR_COMMAND);
                printBoard();
                cout << "Congratulations! You win!" << endl;
                break;
            } else if (isBoardFull()) {
                system(CLEAR_COMMAND);
                printBoard();
                cout << "It's a tie!" << endl;
                break;
            }

            getComputerMove();
            if (checkWinner() == 'O') {
                system(CLEAR_COMMAND);
                printBoard();
                cout << "Computer wins! Better luck next time." << endl;
                break;
            } else if (isBoardFull()) {
                system(CLEAR_COMMAND);
                printBoard();
                cout << "It's a tie!" << endl;
                break;
            }
        }
    }
};

int main() {
    srand(time(nullptr));
    TicTacToe game;
    game.play();
    return 0;
}
