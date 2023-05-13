#include <stdio.h>
#include <string.h>

int main(void) 
{
    char input1[101];
    char input2[101]; 
    scanf("%s",input1);
    scanf("%s",input2);
    if(strlen(input1) < strlen(input2))
        printf("%s %s\n",input1,input2);
    else if(strlen(input1) > strlen(input2))
        printf("%s %s\n",input2,input1);
    else
    {
        if(strcmp(input1,input2) < 0)
            printf("%s %s\n",input1,input2);
        else
            printf("%s %s\n",input2,input1);
    }
}