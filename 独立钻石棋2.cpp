#include <iostream>
#include <vector>

using namespace std;

// 定义棋盘大小
const int BOARD_SIZE = 7;

// 初始化棋盘
vector<vector<char>> initializeBoard() {
    vector<vector<char>> board(BOARD_SIZE, vector<char>(BOARD_SIZE, ' '));
    for (int i = 2; i < 5; i++) {
        for (int j = 2; j < 5; j++) {
            board[i][j] = 'O';
        }
    }
    board[3][3] = 'X';
    return board;
}

// 打印棋盘
void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            cout << cell << ' ';
        }
        cout << '\n';
    }
}

// 检查是否是有效的移动
bool isValidMove(vector<vector<char>>& board, int srcRow, int srcCol, int destRow, int destCol) {
    if (srcRow < 0 || srcRow >= BOARD_SIZE || srcCol < 0 || srcCol >= BOARD_SIZE ||
        destRow < 0 || destRow >= BOARD_SIZE || destCol < 0 || destCol >= BOARD_SIZE) {
        return false;
    }
    if (board[srcRow][srcCol] != 'O' || board[destRow][destCol] != 'X') {
        return false;
    }
    if (srcRow == destRow) {
        if (abs(srcCol - destCol) != 2 || board[srcRow][srcCol - (srcCol - destCol) / 2] != 'O') {
            return false;
        }
    } else if (srcCol == destCol) {
        if (abs(srcRow - destRow) != 2 || board[srcRow - (srcRow - destRow) / 2][srcCol] != 'O') {
            return false;
        }
    } else {
        return false;
    }
    return true;
}

// 执行移动
void makeMove(vector<vector<char>>& board, int srcRow, int srcCol, int destRow, int destCol) {
    board[srcRow][srcCol] = 'X';
    board[destRow][destCol] = 'O';
    if (srcRow == destRow) {
        board[srcRow][srcCol - (srcCol - destCol) / 2] = 'X';
    } else {
        board[srcRow - (srcRow - destRow) / 2][srcCol] = 'X';
    }
}

int main() {
    vector<vector<char>> board = initializeBoard();
    int srcRow, srcCol, destRow, destCol;
    while (true) {
        printBoard(board);
        cout << "Enter source and destination coordinates (row and column): ";
        cin >> srcRow >> srcCol >> destRow >> destCol;
        if (isValidMove(board, srcRow, srcCol, destRow, destCol)) {
            makeMove(board, srcRow, srcCol, destRow, destCol);
        } else {
            cout << "Invalid move. Please try again.\n";
        }
    }
    return 0;
}
