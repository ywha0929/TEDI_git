#include <stdio.h>

int main(void)
{
    int a ,b;
    char c ;
    scanf("%d%c%d",&a,&c,&b);
    switch (c)
    {
    case '+':
        printf("%d\n",a+b);
        break;
    case '-':
        printf("%d\n",a-b);
        break;
    case '*':
        printf("%d\n",a*b);
        break;
    case '/':
        printf("%.2lf\n",(double)a/b);
        break;
    default:
        break;
    }
}