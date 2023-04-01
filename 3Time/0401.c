#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d",&n);
    for(int i = 1; i<= n; i+=2)
    {
        for(int j = 0; j< (n-i)/2; j++)
        {
            printf(" ");
        }
        for(int j = 0; j< i; j++)
        {
            if(j == 0 || j == i-1 ||i ==n ||j == i/2)
                printf("^");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(int i = n-2; i>0; i-=2)
    {
        for(int j = 0; j< (n-i)/2; j++)
        {
            printf(" ");
        }
        for(int j = 0; j< i; j++)
        {
            if(j == 0 || j == i-1 ||i ==n ||j == i/2)
                printf("^");
            else
                printf(" ");
        }
        printf("\n");
    }
}