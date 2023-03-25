#include <stdio.h>

int main(void)
{
    int arr[100][100];
    int height = 0;
    int width = 0;
    scanf("%d%d",&height,&width);
    int num = 1;
    for(int i = height-1; i>=0; i--)
    {
        if((height-1-i) %2 ==0)
        {
            for(int j = 0; j<width; j++)
            {
                arr[i][width-1-j] = num;
                num++;
            }
        }
        else
        {
            for(int j = 0; j<width; j++)
            {
                arr[i][j] = num;
                num++;
            }
        }
    }
    for(int i = 0; i<height; i++)
    {
        for(int j = 0; j<width; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}