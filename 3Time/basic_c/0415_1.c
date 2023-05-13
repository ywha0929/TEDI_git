#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    int a = rand()%3;
    printf("%d\n",a);
    a = rand()%3;
    printf("%d\n",a);
    a = rand()%3;
    printf("%d\n",a);
}