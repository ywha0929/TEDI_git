#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long function(void* ptr)
{
    srand( (__UINTPTR_TYPE__)ptr & 0x0FFFFFFFFFFF );
    int rn = rand();
    long long pac = ((long long)rn&(long long) 0xF0000000) << 16;
    return pac;
}

void* PAT(void* ptr)
{
    long long PAC = function(ptr);
    return (int*) (PAC | ((__UINTPTR_TYPE__) ptr & 0x0FFFFFFFFFFF));
}

void* AUT(void* ptr)
{
    long long PAC = function(ptr);
    if(PAC == ((__UINTPTR_TYPE__) ptr & 0xF00000000000))
        return (int*)(0x500000000000 | ((__UINTPTR_TYPE__) ptr & 0x0FFFFFFFFFFF));
    else 
        return (int*)(0x100000000000 | ((__UINTPTR_TYPE__) ptr & 0x0FFFFFFFFFFF));
}

typedef struct obj {
    char buf[10];
    void (*fp)();
}OBJ;
OBJ object;
void printHI()
{
    printf("%s\n",object.buf);
    printf("HI\n");
}

void printBAD()
{
    printf("%s\n",object.buf);
    printf("BAD\n");
}

void syscall()
{

    void (*fun)();
    // printf("test\n");
    
    object.fp = AUT(object.fp);
    fun = object.fp;
    // printf("test\n");
    fun();
}
void convertToCharArray(unsigned char *arr, long long a)
{
    int i = 0;

    for (i = 0; i < 8; ++i)
    {
        arr[i] = (unsigned char)((((unsigned long long) a) >> (56 - (8*i))) & 0xFFu);
    }
}

int main(void)
{
    
    object.fp = printHI;
    printf("%p\n",object.fp);
    // object.fp = PAT(object.fp);
    // object.fp = PAT(object.fp);
    //kernel code;
    object.fp = printBAD;
    // object.fp = PAT(object.fp);
    syscall();
    
}