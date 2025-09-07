#include<iostream>
using namespace std;

char board[9];      // 1D array for positions 1-9
char currentPlayer;   

void resetBoard() {
   for(int i=0; i<9; i++)
        board[i] = '1'+ i;
        
    } 

 void displayBoard() {
    cout<<"\n";
        cout<< " " << board[0] << " | " << board[1]<< " | " << board[2] << "\n";  
        cout<< "---|---|---\n";
        cout<< " " << board[3] << " | " << board[4]<< " | " << board[5] << "\n"; 
        cout<< "---|---|---\n";
        cout<< " " << board[6] << " | " << board[7]<< " | " << board[8] << "\n"; 
        cout<<"\n";
    }
bool makeMove(int pos) {
    if (pos >= 1 && pos <= 9 && board[pos - 1] != 'X' && board[pos - 1] != '0') {
        board[pos - 1] = currentPlayer;
        return true;
    }
    return false;
}
    
    bool checkWin() {
        // Winning combinations
        int winCombos[8][3] = {
            {0,1,2},{3,4,5},{6,7,8},  //rows
            {0,3,6},{1,4,7},{2,5,8},  //columns
            {0,4,8},{2,4,6}           //diagonals
        };
    for (auto &combo : winCombos) {
        if (board[combo[0]] == currentPlayer &&
            board[combo[1]] == currentPlayer &&
            board[combo[2]] == currentPlayer) {
            return true;
            }
    }
    return false;
}
    
    bool checkDraw() {
        for (int i=0; i<9; i++)
            if (board[i] != 'X' && board[i] != '0')
                return false;
        return true;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    int main() {
        char playAgain;
        do {
            resetBoard();
            currentPlayer = 'X';
        bool gameOver = false;
        
        while (!gameOver) {
            displayBoard();
            int pos;
            cout << "Player " << currentPlayer << ", enter your move (1-9): ";
            cin >> pos;

            if (!makeMove(pos)){
                cout << "Invalid move! Try again.\n";
                continue;
            }

            if (checkWin()) {
                displayBoard();
                cout << "Player " << currentPlayer << " wins!\n";
                gameOver = true;
            } else if  (checkDraw()) {
                displayBoard();
                cout << "It's a draw!\n";
                gameOver = true;
            } else {
                switchPlayer();
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'y');

    cout << "Thanks for playing!\n";
    return 0;
}
     