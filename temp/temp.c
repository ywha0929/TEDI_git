#include <stdio.h>

int main(void)
{
    int temp = 0;
    scanf("%d",&temp);
    int min = temp;
    int max = temp;
    for(int i = 0; i< 4; i++)
    {
        scanf("%d",&temp);
        min = min<temp?min:temp;
        max = max>temp?max:temp;
    }
    printf("%d %d\n",min,max);
}