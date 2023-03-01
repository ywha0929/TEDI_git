#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d",&n);
    int ones = n % 10;
    int tens = n / 10;
    int new = ones*10 + tens;
    new = new * 2;
    int hundreds = new / 100;
    new = new - (hundreds*100);
    printf("%d\n",new);
    if(new > 50)
    {
        printf("OH MY GOD\n");
    }
    else
        printf("GOOD\n");
}