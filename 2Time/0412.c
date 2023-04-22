#include <stdio.h>

typedef struct student
{
    int score;
    int rank;
} student;

int main(void)
{
    int numStudent = 0;
    scanf("%d",&numStudent);
    student listStudent[200];
    for(int i =0; i<numStudent; i++)
    {
        scanf("%d",&(listStudent[i].score));
    }
    int rank=1;
    int duplicateRank=0;
    for(int i =100; i>=0;i--)
    {
        
        for(int j = 0; j < numStudent; j++)
        {
            if(listStudent[j].score == i)
            {
                
                listStudent[j].rank = rank;
                duplicateRank++;
            }
        }
        rank += duplicateRank;
        duplicateRank = 0;
    }

    for(int i = 0; i< numStudent; i++)
    {
        printf("%d %d\n",listStudent[i].score, listStudent[i].rank);
    }
}