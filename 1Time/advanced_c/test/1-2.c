#include <stdio.h>

typedef struct data{
    char name[100];
    int kor;
    int math;
    int eng;
}Data;

int main(void)
{
    Data arr[4];
    for(int i = 0; i<4;i++)
    {
        scanf("%s%d%d%d",arr[i].name,&(arr[i].kor),&(arr[i].math),&(arr[i].eng));
    }
    int max = arr[0].kor + arr[0].math + arr[0].eng;
    int index = 0;
    for(int i =0; i< 4; i++)
    {
        int sum = arr[i].kor + arr[i].math + arr[i].eng;
        if(max < sum)
        {
            max = sum;
            index = i;
        }
    }
    printf("%s\n",arr[index].name);
}