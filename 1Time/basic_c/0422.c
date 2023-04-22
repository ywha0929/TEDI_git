#include <stdio.h>
#define BoardSize 20

int checkWinner(char board[][BoardSize], int y, int x)
{
    char target = board[y][x];
    int winner =0;
    int flag = 0;
    //W
    if(x<4);
    else
    {
        for(int i = 0; i< 5; i++)
        {
            if(board[y][x-i] != target)
            {
                flag = 0;
                break;      
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
            winner = 1;
        flag = 0;
    }
    
    //NW
    if(x<4 || y <4);
    else
    {
        for(int i = 0; i< 5; i++)
        {
            if(board[y-i][x-i] != target)
            {
                flag = 0;
                break;      
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
            winner = 1;
        flag = 0;
    }
    //N
    if(y <4);
    else
    {
        for(int i = 0; i< 5; i++)
        {
            if(board[y-i][x] != target)
            {
                flag = 0;
                break;      
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
            winner = 1;
        flag = 0;
    }
    //NE
    if(x>BoardSize-5 || y <4);
    else
    {
        for(int i = 0; i< 5; i++)
        {
            if(board[y-i][x+i] != target)
            {
                flag = 0;
                break;      
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
            winner = 1;
        flag = 0;
    }
    //E
    if(x>BoardSize -5);
    else
    {
        for(int i = 0; i< 5; i++)
        {
            if(board[y][x+i] != target)
            {
                flag = 0;
                break;      
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
            winner = 1;
        flag = 0;
    }
    //SE
    if(x>BoardSize-5 || y> BoardSize-5);
    else
    {
        for(int i = 0; i< 5; i++)
        {
            if(board[y+i][x+i] != target)
            {
                flag = 0;
                break;      
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
            winner = 1;
        flag = 0;
    }
    //S
    if(y> BoardSize-5);
    else
    {
        for(int i = 0; i< 5; i++)
        {
            if(board[y+i][x] != target)
            {
                flag = 0;
                break;      
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
            winner = 1;
        flag = 0;
    }
    //SW
    if(x<4 || y>BoardSize-5);
    else
    {
        for(int i = 0; i< 5; i++)
        {
            if(board[y+i][x-i] != target)
            {
                flag = 0;
                break;      
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
            winner = 1;
        flag = 0;
    }
    return winner;
}

void printBoard(char board[][BoardSize])
{
    for(int i= 0; i<BoardSize+1; i++)
    {
        for(int j = 0; j< BoardSize + 1; j++)
        {
            if(i == 0 && j == 0)
            {
                printf("   ");
            }
            else if( i == 0 && j != 0)
            {
                printf("%3d",j -1);
            }
            else if(i != 0 && j == 0)
            {
                printf("%3d",i-1);
            }
            else
            {
                printf("%3c",board[i-1][j-1]);
            }

            printf(" ");
        }
        printf("\n");
    }
}

int main(void)
{
    char board[BoardSize][BoardSize];
    for(int i =0; i< BoardSize; i++)
        for(int j =0; j< BoardSize; j++)
            board[i][j] = '*';
    int mode=0;
    int winner = 0;
    int x=0,y=0;
    while(winner==0)
    {
        printBoard(board);
        printf("player %d's turn (row,col) : ",mode+1);
        scanf("%d%d",&y,&x);
        if(board[y][x] != '*')
        {
            printf("That position is already taken\n");
        }
        else
        {
            if(mode == 0)
                board[y][x] = 'O';
            else
                board[y][x] = 'X';
            winner = checkWinner(board,y,x);
            
            mode++;
            mode = mode %2;
        }
        
    }
    mode++;
    mode = mode %2;
    printf("player %d wins!\n",mode+1);
}