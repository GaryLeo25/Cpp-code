#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int BOARD_SIZE = 8;

// ��������
void initializeBoard(vector<vector<char>> &board);
void printBoard(const vector<vector<char>> &board);
bool isValidMove(const vector<vector<char>> &board, int row, int col, char player);
bool isWinner(const vector<vector<char>> &board, char player);
bool isBoardFull(const vector<vector<char>> &board);
void playerMove(vector<vector<char>> &board, char player);
void computerMove(vector<vector<char>> &board, char player);

int main() {
    vector<vector<char>> board(BOARD_SIZE, vector<char>(BOARD_SIZE, ' '));
    char currentPlayer = 'X';

    initializeBoard(board);
    printBoard(board);

    while (true) {
        if (currentPlayer == 'X') {
            playerMove(board, currentPlayer);
        } else {
            computerMove(board, currentPlayer);
        }

        printBoard(board);

        if (isWinner(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        } else if (isBoardFull(board)) {
            cout << "It's a draw!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // �л����
    }

    return 0;
}

void initializeBoard(vector<vector<char>> &board) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            board[i][j] = ' ';
        }
    }
}

void printBoard(const vector<vector<char>> &board) {
    cout << "  ";
    for (int i = 0; i < BOARD_SIZE; ++i) {
        cout << i << " ";
    }
    cout << endl;

    for (int i = 0; i < BOARD_SIZE; ++i) {
        cout << i << " ";
        for (int j = 0; j < BOARD_SIZE; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool isValidMove(const vector<vector<char>> &board, int row, int col, char player) {
    return (row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == ' ');
}

bool isWinner(const vector<vector<char>> &board, char player) {
    // TODO: ʵ���ж�ʤ�����߼���������Ҫ����ˮƽ����ֱ�ͶԽ��߷���
}

bool isBoardFull(const vector<vector<char>> &board) {
    for (int i = 0; i < BOARD_SIZE; ++i) {
        for (int j = 0; j < BOARD_SIZE; ++j) {
            if (board[i][j] == ' ') {
                return false; // ���ڿո�����δ��
            }
        }
    }
    return true; // ��������
}

void playerMove(vector<vector<char>> &board, char player) {
    int row, col;

    cout << "Player " << player << ", enter your move (row and column): ";
    cin >> row >> col;

    while (!isValidMove(board, row, col, player)) {
        cout << "Invalid move! Try again: ";
        cin >> row >> col;
    }

    board[row][col] = player;
}

void computerMove(vector<vector<char>> &board, char player) {
    // TODO: ʵ�ּ�������ƶ��߼�������ʹ�ü򵥵�����ƶ�����
    srand(static_cast<unsigned>(time(nullptr)));
    int row, col;

    do {
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
    } while (!isValidMove(board, row, col, player));

    cout << "Computer (Player " << player << ") chooses: " << row << " " << col << endl;

    board[row][col] = player;
}
