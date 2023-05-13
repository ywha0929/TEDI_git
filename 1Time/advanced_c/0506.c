#include <stdio.h>
#include <string.h>

typedef struct p {
    int num;
    int gas;
}machine;

int main(void) 
{
    int n = 0;
    machine machines[100];
    for(int i = 0; i< 100; i++)
    {
        machines[i].num = 0;
        machines[i].gas = 0;
    }
    scanf("%d",&n);
    for(int i = 0; i< n; i++) 
    {
        scanf("%d%d",&(machines[i].num), &(machines[i].gas));
    }
    int num = 1;
    for(int i = 1; i<= 100; i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(machines[j].num == i)
            {
                printf("%d %d\n",machines[j].num, machines[j].gas);
            }
        }
    }
    // //sort
    // int max_num = machines[0].num;
    // int index =0;
    // for(int i =0; i< n; i++)
    // {
    //     max_num = machines[0].num;
    //     index = 0;
    //     for(int j = 0; j< n-i; j++)
    //     {
    //         if(max_num < machines[j].num)
    //         {
    //             max_num = machines[j].num;
    //             index = j;
    //         }
    //     }
    //     machine temp;
    //     temp.num = machines[index].num;
    //     temp.gas = machines[index].gas;
    //     machines[index].num = machines[n-i-1].num;
    //     machines[index].gas = machines[n-i-1].gas;
    //     machines[n-i-1].num = temp.num;
    //     machines[n-i-1].gas = temp.gas;
    // }

    // for(int i = 0; i< n; i++)
    // {
    //     printf("%d %d\n",machines[i].num, machines[i].gas);
    // }
}