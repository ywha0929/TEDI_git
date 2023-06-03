#include <stdio.h>
#include <stdlib.h>
long long function(int* ptr)
{
    int * temp = ptr;
    // printf("%p\n",ptr);
    srand((__UINTPTR_TYPE__)ptr & 0x000FFFFFFFFF);
    int rn = rand();
    printf("%llx\n",rn);
    long long pac = ((long long)rn&(long long) 0xFFF00000) << 16;
    return pac;
}
int* PAT(int* ptr)
{
    long long pac = function(ptr);
    printf("%llx\n",pac);
    long long new = pac | ((__UINTPTR_TYPE__)ptr & 0x000FFFFFFFFF);
    return (int*)new;
}

int* AUT(int*ptr)
{
    long long pac = function(ptr);
    if (pac == ((__UINTPTR_TYPE__)ptr & 0xFFF000000000))
        return (int*) (0x7ff000000000 | ((__UINTPTR_TYPE__)ptr & 0x000FFFFFFFFF));
}

int main(void)
{
    int a = 0;
    printf("size : %p\n",&a);
    printf("%p\n",&a);
    printf("%p\n",PAT(&a));
    int* pa = PAT(&a);

    printf("%d\n",*AUT(pa));
    printf("%d",*pa);
}