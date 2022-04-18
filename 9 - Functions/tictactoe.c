#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

char board[10] = {'\0','\0','\0','\0','\0','\0','\0','\0','\0','\0'};

void drawBoard(){
    system("cls");
    printf("\n\n    Tic Tac Toe\n\nPlayer 1 (X) - Player 2 (O)\n\n\n");
    for (int i = 0; i<3;i++){
        char a = board[1+i*3] == '\0' ? (1+i*3)+'0' : board[1+i*3];
        char b = board[2+i*3] == '\0' ? (2+i*3)+'0' : board[2+i*3];
        char c = board[3+i*3] == '\0' ? (3+i*3)+'0' : board[3+i*3];
        printf("   |   |   \n %c | %c | %c \n",a,b,c);
        if (i != 2){
            printf("___|___|___\n");
        } else {
            printf("   |   |   \n\n");
        }
    }
}

int checkForWin() {
    int winner = 3;
    for (int i = 0; i<3; i++){
        if (board[1+i*3] == board[2+i*3] && board[1+i*3] == board[3+i*3] && board[1+i*3] != '\0'){ // check for row victory
            winner = board[1+i*3] == 'X' ? 1 : 2;
        } else if (board[i+1] == board[i+4] && board[i+1] == board[i+7] && board[i+1] != '\0'){ // check for column victory
            winner = board[1+i] == 'X' ? 1 : 2;
        } 
    }
    if (board[1] == board[5] && board[1] == board[9] && board[1] != '\0'){ // check for diagonal victory
        winner = board[1] == 'X' ? 1 : 2;
    } else if (board[3] == board[5] && board[1] == board[7] && board[3] != '\0'){ // check for diagonal victory
        winner = board[3] == 'X' ? 1 : 2;
    }

    if (winner == 3){
        for (int i = 1; i<10; i++){ // check for draw
            if (board[i] == '\0'){
                winner = 0;
            }
        }
    }

    return winner;
}

bool markBoard(int player, int choice){
    if (player == 1 && board[choice] != 'X' && board[choice] != 'O'){
        board[choice] = 'X';
    } else if (player == 2 && board[choice] != 'X' && board[choice] != 'O'){
        board[choice] = 'O';
    } else {
        printf("Invalid selection!\n");
        return true;
    }
    return false;
}

int main(){
    int player = 1;
    int choice;
    int winner = 0;
    while (!winner){
        drawBoard();
        bool continueAsking = true;
        while (continueAsking){
            printf("Player %d, enter a number: ",player);
            scanf("%d",&choice);
            continueAsking = markBoard(player, choice);
        }
        player = player == 1 ? 2 : 1;
        winner = checkForWin();
    }
    drawBoard();
    if (winner == 3){
        printf("The game has ended in a draw!");
    } else {
        printf("Player %d has won the game!",winner);
    }
    getch();
    return 0;
}