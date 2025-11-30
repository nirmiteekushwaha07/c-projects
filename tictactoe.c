#include <stdio.h>

char board[3][3]; // Game board

// Initialize the board with empty spaces
void initializeBoard() {
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
board[i][j] = ' ';
}
}
}

// Display the board
void printBoard() {
printf("  0   1   2\n");
for(int i=0;i<3;i++){
printf("%d", i);
for(int j=0;j<3;j++){
printf(" %c ", board[i][j]);
if(j<2) printf("|");
}
printf("\n");
if(i<2) printf(" ---|---|---\n");
}
}

// Check if a player has won
char checkWinner() {
// Rows and columns
for(int i=0;i<3;i++){
if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' ')
return board[i][0];
if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=' ')
return board[0][i];
}
// Diagonals
if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' ')
return board[0][0];
if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' ')
return board[0][2];

```
return ' '; // No winner yet
```

}

// Main function
int main() {
int row, col;
char player = 'X';
int moves = 0;

```
initializeBoard();

while(1) {
    printBoard();
    printf("Player %c, enter row and column (0-2): ", player);
    scanf("%d %d", &row, &col);

    if(row<0 || row>2 || col<0 || col>2 || board[row][col]!=' ') {
        printf("Invalid move! Try again.\n");
        continue;
    }

    board[row][col] = player;
    moves++;

    char winner = checkWinner();
    if(winner != ' ') {
        printBoard();
        printf("Player %c wins!\n", winner);
        break;
    }

    if(moves == 9) {
        printBoard();
        printf("It's a draw!\n");
        break;
    }

    player = (player == 'X') ? 'O' : 'X'; // Switch player
}

return 0;
```

}
