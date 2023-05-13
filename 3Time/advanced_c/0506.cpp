#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
typedef struct {
    int value;
    int rank;
    int num;
}data;

int compare_num(data data1, data data2)
{
    if(data1.num < data2.num)
        return -1;
    else 1;
}
int compare_val(data data1, data data2)
{
    if(data1.value < data2.value)
        return -1;
    else 1;
}

int main(void)
{
    int n =0;
    scanf("%d",&n);
    std::vector<data> Data;
    data temp;
    int index;
    int max_val;
    for(int i = 0; i< n; i++)
    {
        scanf("%d",&(Data[i].value));
        Data[i].num = i;
    }
    std::sort(Data.front(),Data.end(),compare_value);
    // for(int i = 0; i< n; i++)
    // {
    //     max_val = Data[0].value;
    //     index = 0;
    //     for(int j = 0; j< n-i; j++)
    //     {
    //         if(Data[j].value > max_val)
    //         {
    //             max_val = Data[j].value;
    //             index = j;
    //         }
    //     }
        
    //     memcpy(&temp,&(Data[n-i-1]),sizeof(data));
    //     memcpy(&(Data[n-1-i]),&(Data[index]),sizeof(data));
    //     memcpy(&(Data[index]),&(temp),sizeof(data));
    //     // temp.num = Data[n-i-1].num;
    //     // temp.rank = Data[n-i-1].rank;
    //     // temp.value = Data[n-i-1].value;
        
    //     // Data[n-i-1].num = Data[index].num;
    //     // Data[n-i-1].rank = Data[index].rank;
    //     // Data[n-i-1].value = Data[index].value;

    //     // Data[index].num = temp.num;
    //     // Data[index].rank = temp.rank;
    //     // Data[index].value = temp.value;

    // }



    for(int i = 0; i< n; i++)
        Data[i].rank = i;
    
    for(int i = 0; i< n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            if(Data[j].num == i)
            {
                printf("%d ",Data[j].rank);
                break;
            }
        }
    }
    // for(int i = 0; i< n; i++)
    // {
    //     max_val = Data[0].num;
    //     index = 0;
    //     for(int j = 0; j< n-i; j++)
    //     {
    //         if(Data[j].num > max_val)
    //         {
    //             max_val = Data[j].num;
    //             index = j;
    //         }
    //     }
        
    //     memcpy(&temp,&(Data[n-i-1]),sizeof(data));
    //     memcpy(&(Data[n-1-i]),&(Data[index]),sizeof(data));
    //     memcpy(&(Data[index]),&(temp),sizeof(data));
    //     // temp.num = Data[n-i-1].num;
    //     // temp.rank = Data[n-i-1].rank;
    //     // temp.value = Data[n-i-1].value;
        
    //     // Data[n-i-1].num = Data[index].num;
    //     // Data[n-i-1].rank = Data[index].rank;
    //     // Data[n-i-1].value = Data[index].value;

    //     // Data[index].num = temp.num;
    //     // Data[index].rank = temp.rank;
    //     // Data[index].value = temp.value;

    // }
    // for(int i = 0; i< n ; i++)
    //     printf("%d ",Data[i].rank);
    // printf("\n");
}