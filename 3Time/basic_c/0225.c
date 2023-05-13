#include <stdio.h>

int main(void)
{
    for(int i = 0; i< 7; i++)
    {
        if(i == 0)
        {
            printf(" ");
            for(int j = 0; j< 3; j++)
            {
                printf("*");
            }
            printf(" ");
            for(int j = 0; j< 3; j++)
            {
                printf("*");
            }
        }
        else if( i == 1)
        {
            printf("*");
            for(int j = 0; j< 3; j++)
                printf(" ");
            printf("*");
            for(int j = 0; j< 3; j++)
                printf(" ");
            printf("*");
        }
        else if(i == 2)
        {
            for(int j = 0; j< 9 ; j++)
            {
                if(j == 0 || j == 8)
                    printf("*");
                else
                    printf(" ");
            }
        }
        else
        {
            if(9-((i-2)*2) == 3)
                continue;
            for(int j = 0; j<i-2; j++)
            {
                printf(" ");
            }
            
            for(int j = 0; j<9-((i-2)*2); j++)
            {
                if(j == 0|| j == (9-((i-2)*2))-1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    for(int i = 6; i> 0; i--)
    {
        if(i == 1)
        {
            printf(" ");
            for(int j = 0; j< 3; j++)
            {
                printf("*");
            }
            printf(" ");
            for(int j = 0; j< 3; j++)
            {
                printf("*");
            }
        }
        else if( i == 2)
        {
            printf("*");
            for(int j = 0; j< 3; j++)
                printf(" ");
            printf("*");
            for(int j = 0; j< 3; j++)
                printf(" ");
            printf("*");
        }
        else if(i == 3)
        {
            for(int j = 0; j< 9 ; j++)
            {
                if(j == 0 || j == 8)
                    printf("*");
                else
                    printf(" ");
            }
        }
        else
        {
            if(9-((i-2)*2) == 3)
                continue;
            for(int j = 0; j<i-2; j++)
            {
                printf(" ");
            }
            
            for(int j = 0; j<9-((i-2)*2); j++)
            {
                if(j == 0|| j == (9-((i-2)*2))-1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    for(int i =0 ; i< 3; i++)
    {
        for(int j = 0; j < 2+i; j++)
        {
            printf(" ");
        }
        printf("*");
        for(int j = 0; j < 3-i*2; j++)
        {
            printf(" ");
        }
        if(3-i*2 > 0)
            printf("*");
        printf("\n");
    }
    for(int i = 0 ; i< 10; i++)
    {
        if(i %4 == 0)
        {
            for(int j = 0; j< 3;j++)
            {
                printf(" ");
            }
            printf("*");
        }
        else if( i%4 == 1)
        {
            for(int j = 0; j< 4;j++)
            {
                printf(" ");
            }
            printf("*");
        }
        else if(i % 4 == 2)
        {
            for(int j = 0; j< 5;j++)
            {
                printf(" ");
            }
            printf("*");
        }
        else if(i % 4 == 3)
        {
            for(int j = 0; j< 4;j++)
            {
                printf(" ");
            }
            printf("*");
        }
        
        printf("\n");
    }
}