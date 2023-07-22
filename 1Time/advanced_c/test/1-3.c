#include <stdio.h>

int mySum(int n)
{
    int sum = 0;
    for(int i =0; i<= n ; i++)
    {
        sum+=i*i;
    }
    return sum;
}
int main(void)
{
    int n =0;
    scanf("%d",&n);
    printf("%d\n",mySum(n));
}