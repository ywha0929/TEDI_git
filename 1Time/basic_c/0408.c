#include <stdio.h>

int sum(int a, int b)
{
    return a+b;
}
double divide(int a, int b)
{
    return (double)a/(double)b;
}
int multiply(int a, int b)
{
    return a*b;
}
int sub(int a, int b)
{
    return a-b;
}

int main()
{
    int number1 = 0;
    int number2 = 0;
    char operator = 0;
    scanf("%d%c%d",&number1, &operator, &number2);
    int result = multiply(number1,number2);
    switch(operator)
    {
        case '+':
            printf("%d\n",sum(number1,number2));
            break;
        case '-':
            printf("%d\n",sub(number1,number2));
            break;
        case '*':
            printf("%d\n",multiply(number1,number2));
            break;
        case '/':
            printf("%lf\n",divide(number1,number2));
            break;
        default:
            break;
    }
}
