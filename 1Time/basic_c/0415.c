#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int createRandomNumber() // 0이 가위, 1이 바위, 2가 보
{
    return (rand()%3);
}

int getWinner(int a, int b) // if a wins, return -1 \ if b wins, return 1 \ if draw return 0
{
    if(a == b)
        return 0;
    else if( a == 0)
    {
        if(b == 1)
            return 1;
        else
            return -1;
    }
    else if( a == 1)
    {
        if(b == 2)
            return 1;
        else
            return -1;
    }
    else //a == 2
    {
        if(b == 0)
            return 1;
        else
            return -1;
    }
}



int main(void) 
{
    
    srand(time(NULL));
    int user = 0, com = 0, draw = 0;
    char user_input[10];
    char user_i = 0;
    printf("가위바위보 게임에 오신 것을 환영합니다\n");
    
    while(user != 2 && com != 2)
    {
        printf("가위 바위 보를 입력하시오 : ");
        scanf("%s",user_input);
        if(strcmp(user_input,"가위") == 0)
            user_i = 0;
        else if(strcmp(user_input,"바위") == 0)
            user_i = 1;
        else if(strcmp(user_input,"보") == 0)
            user_i = 2;
        int comp_i = createRandomNumber();
        if(comp_i == 0)
            printf("컴퓨터 : 가위\n");
        if(comp_i == 1)
            printf("컴퓨터 : 바위\n");
        if(comp_i == 2)
            printf("컴퓨터 : 보\n");
        int status = getWinner(user_i,comp_i);
        if( status == -1)
        {
            user++;
        }
        else if(status == 0)
        {
            draw++;
        }
        else
        {
            com++;
        }

        printf("현재 전적 : %d승-%d무-%d패\n",user,draw,com);
    }
    fprintf("최종 전적 : %d승-%d무-%d패\n",user,draw,com);
    /* 삼판 이선승제로 컴퓨터와 대결을 한다. 한명이 (컴퓨터는 유저든) 
    2번 연속으로 이기면 바로 종료 (3번째 판 안함)
    1,2라운드에서 한번 이기고 한번 지면 3번째 판까지.
    최종 우승자와, 전적을 출력한다.
    */   
}