#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100];
    char arr2[100];
    scanf("%s%s",arr,arr2);
    if(strcmp(arr,arr2) == 0)
        printf("%d\n",arr);
    else if(strlen(arr) == strlen(arr2))
    {
        for(int i = 0; i< strlen(arr); i++)
        {
            printf("%c",arr[strlen(arr) -1 -i]);
        }
        printf("\n");
    }
    else if(strlen(arr) > strlen(arr2))
    {
        for(int i = 0; i< strlen(arr2); i++)
        {
            printf("%c",arr[i]);
        }
        printf("\n");
    }
    else
    {
        for(int i = 0; i< strlen(arr); i++)
        {
            printf("%c",arr2[i]);
        }
        printf("\n");
    }
}