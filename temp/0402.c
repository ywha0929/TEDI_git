#include <stdio.h>

int main(void)
{
    char input[100000] ={0,};
    scanf("%s",input);
    int count1=0,count2=0;
    for(int i =0; i< strlen(input); i++)
    {
        if(input[i] == '(')
            count1++;
        else if(input[i] == ')')
            count2++;
    }
    printf("%d %d",count1,count2);
}