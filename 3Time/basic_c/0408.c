#include <stdio.h>


int main(int argc , char* args[])
{
    printf("%d\n",argc);
    for(int i = 0; i< argc; i++)
    {
        printf("%s\n",args[i]);
    }
    return 0;
}