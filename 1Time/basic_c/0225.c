#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    for(int i = a; i<=b; i++)
    {
        for(int j = 1; j<=9;j++)
        {
            printf("%dx%d=%d\n",i,j,i*j);
        }
        printf("\n");
    }
}