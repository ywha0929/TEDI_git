#include <stdio.h>
#define Size 20

int CheckWinner(char board[][Size], int y, int x)
{
    char target = board[y][x];
    int winner = 0;
    int flag = 0;
    //E
    while(x > 0 && board[y][x-1] == target)
        x = x - 1;
    if(x > Size - 5);
    else
    {
        for(int i =0 ; i< 5; i++)
        {
            if(board[y][x+i] != target)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if(flag == 1)
            winner = 1;
    }
    //SE
    while(y > 0 && x > 0 && board[y-1][x-1] == target)
    {
        x = x - 1;
        y = y - 1;
    }
    if(x > Size - 5 || y> Size - 5);
    else
    {
        for(int i =0 ; i< 5; i++)
        {
            if(board[y+i][x+i] != target)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if(flag == 1)
            winner = 1;
    }
    //S
    while( y > 0 && board[y-1][x] == target)
        y = y - 1;
    if(y > Size - 5);
    else
    {
        for(int i =0 ; i< 5; i++)
        {
            if(board[y+i][x] != target)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if(flag == 1)
            winner = 1;
    }
    //SW
    while(y > 0 && x < Size-1 && board[y-1][x+1] == target)
    {
        y = y - 1;
        x = x + 1;
    }
        
    if(x <4 || y > Size -5);
    else
    {
        for(int i =0 ; i< 5; i++)
        {
            if(board[y+i][x-i] != target)
            {
                flag = 0;
                break;
            }
            else
                flag = 1;
        }
        if(flag == 1)
            winner = 1;
    }
    return winner;
}

void printBoard(char board[][Size])
{
    for(int i = 0; i< Size+1; i++)
    {
        for(int j = 0; j< Size+1; j++)
        {
            if(i == 0 && j == 0)
            {
                printf("  ");
            }
            else if(i ==0 && j != 0)
            {
                printf("%2d",j-1);
            }
            else if(i != 0 && j==0)
            {
                printf("%2d",i-1);
            }
            else
            {
                if(board[i-1][j-1] == 'O')
                    printf("\033[0;31m");
                else if (board[i-1][j-1] == 'X')
                    printf("\033[0;34m");
                printf("%2c",board[i-1][j-1]);
                printf("\033[0m");
            }

            printf(" ");
        }
        printf("\n");
    }
}

int main(void)
{
    char board[Size][Size];
    for(int i = 0; i< Size; i++)
        for(int j = 0; j<Size; j++)
            board[i][j] = '*';
    int winner = 0;
    int y = 0, x = 0;
    int mode = 0;
    while(winner == 0)
    {
        printBoard(board);
        printf("Player %d's turn (row,col) : ",mode+1);
        scanf("%d%d",&y,&x);
        if(board[y][x] != '*')
            printf("That position is already taken\n");
        else
        {
            if(mode == 0)
                board[y][x] = 'O';
            else
                board[y][x] = 'X';
            winner = CheckWinner(board, y, x);
            mode++;
            mode = mode%2;
            
        }
    }
    mode++;
    mode = mode%2;
    printBoard(board);
    printf("Player %d wins!\n",mode+1);
}