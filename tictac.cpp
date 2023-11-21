#include <iostream>
using namespace std;
enum Player{
    X,
    O
};
struct TicTacToe{
    static const int gridSize=3;
    char board[gridSize][gridSize];
    Player currentPlayer;
    TicTacToe():currentPlayer(X) {
        for (int i=0; i<gridSize;++i){
            for (int j=0; j<gridSize;++j){
                board[i][j]=' ';
            }
        }
    }
    void printBoard() const{
        for (int i=0; i<gridSize; ++i){
            for (int j=0; j<gridSize; ++j){
                cout<<board[i][j];
                if (j<gridSize-1)cout<<" | ";
            }
            cout<<"\n";
            if (i<gridSize-1) cout<<"---------\n";
        }
    }
    void handleInput(){
        int move;
        cout<<"Player "<<((currentPlayer == X) ? "X" : "O")<<"'s turn. Enter your move (1-9): ";
        cin>>move;

        int row=(move-1)/gridSize;
        int col=(move-1)%gridSize;

        if (move>=1 && move<=9 && board[row][col] == ' '){
            board[row][col]=(currentPlayer == X) ? 'X' : 'O';
            switchPlayer();
        } else {
            cout << "Invalid move. Try again.\n";
            handleInput();
        }
    }
    bool checkWin() const{
        for (int i = 0; i < gridSize; ++i){
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0]==board[i][2]) return true;
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i]==board[2][i]) return true;
        }

        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) return true;
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) return true;

        return false;
    }
    bool isBoardFull() const{
        for (int i=0; i<gridSize; ++i){
            for (int j=0; j<gridSize; ++j){
                if (board[i][j]==' '){
                    return false;
                }
            }
        }
        return true;
    }
    void switchPlayer(){
        currentPlayer=(currentPlayer == X) ? O : X;
    }
};
int main(){
    TicTacToe game;
    while (true){
        game.printBoard();
        game.handleInput();

        if (game.checkWin()){
            cout<<"Player "<<((game.currentPlayer == X) ? "O" : "X")<<" wins!\n";
            break;
        } else if (game.isBoardFull()){
            cout<<"It's a draw!\n";
            break;
        }
    }
    return 0;
}
