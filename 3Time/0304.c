#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 3;
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j< i;j++)
        {
            printf(" ");
        }
        for(int j = 0; j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}