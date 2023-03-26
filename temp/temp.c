#include <stdio.h>

int main(void)
{
    int size= 0;
    scanf("%d",&size);
    for(int i = 1; i<= size; i+=2)
    {
        for(int j = 0; j < (size-i)/2; j++)
        {
            printf(" ");
        }
        for(int j= 0; j< i; j++)
        {
            printf("*");

        }
        printf("\n");
    }
    
}