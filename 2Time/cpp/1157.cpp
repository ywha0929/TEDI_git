#include <iostream>
using namespace std;
int main(void)
{
    int arr[26]={0,};
    char input = 0;
    while(input !='\n')
    {
        input = getchar();
        // printf("%d\n",input);
        if(input>=97)
            arr[input-97]+=1;
        else
            arr[input-65]+=1;
        
    }
    int max = arr[0];
    int index = 0;
    int count = 0;
    for(int i = 0; i< 26; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    for(int i = 0; i< 26; i++)
    {
        if(max == arr[i])
            count++;
        if(count >=2)
            break;
    }
    
    if(count >= 2)
        printf("?\n");
    else
        printf("%c\n",index+65);
}