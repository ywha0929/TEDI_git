#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    string line;
    int arr[26] = {0,};
    vector<int> result;
    char input;
    while((input = getchar())!=EOF)
    {
        arr[input-97]+=1;
    }

    // for(int i = 0; i< 26 ; i++)
    // {
    //     printf("%c : %d\n",i+97,arr[i]);   
    // }

    int max = arr[0];
    // int index = 0;
    for(int i = 0; i< 26; i++)
    {
        if(max == arr[i])
        {
            result.push_back(i);
        }
        else if(max < arr[i])
        {
            result.clear();
            max = arr[i];
            result.push_back(i);
        }
    }

    for(int i = 0; i < result.size(); i++)
    {
        printf("%c",result[i]+97);
    }
    printf("\n");
}