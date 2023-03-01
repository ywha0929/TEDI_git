#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int flag = 0;
    scanf("%d%d",&a,&b);
    switch (a%2)
    {
    case 1:
        printf("홀수");
        flag +=1;
        break;
    
    default:
        printf("짝수");
        break;
    }
    printf("+");
    switch (b%2)
    {
    case 1:
        printf("홀수");
        flag +=1;
        break;
    
    default:
        printf("짝수");
        break;
    }
    printf("=");
    if(flag%2 == 0)
    {
        printf("짝수");
    }
    else
    {
        printf("홀수");
    }
}

1229