#include <stdio.h>
#include <string.h>

int main(void) 
{
    char arr1[51];
    char arr2[51];
    scanf("%s",arr1);
    scanf("%s",arr2);

    if(strcmp(arr1,arr2)==0)
    {
        printf("%s\n",arr1);
    }
    else if(strlen(arr1) == strlen(arr2))
    {
        for(int i =0 ;i<strlen(arr1); i++)
        {
            printf("%c",arr1[strlen(arr1)-1-i]);
        }
        printf("\n");
    }
    else if(strlen(arr1) > strlen(arr2))
    {
        for(int i =0; i< strlen(arr2); i++)
        {
            printf("%c",arr1[i]);
        }
        printf("\n");
    }
    else
    {
       for(int i =0; i< strlen(arr1); i++)
        {
            printf("%c",arr2[i]);
        }
        printf("\n"); 
    }
}