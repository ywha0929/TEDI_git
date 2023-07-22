#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
    char input = 0;
    stack<int> bin;
    stack<int> result;
    while((input = getchar()) != EOF)
    {
        bin.push(input-'0');
    }
    while(!bin.empty())
    {
        int digit = 0;
        int first,second,third;
        first = bin.top();
        bin.pop();
        if(!bin.empty())
        {
            second = bin.top();
            bin.pop();
        }
        else
        {
            second = 0;
        }
        if(!bin.empty())
        {
            third = bin.top();
            bin.pop();
        }
        else
        {
            third = 0;
        }
        if(first == 1)
            digit +=1;
        if(second == 1)
            digit +=2;
        if(third == 1)
            digit +=4;
        result.push(digit);
    }
    while(result.size() !=0)
    {
        cout<<result.top();
        result.pop();
    }   
    cout<<endl;
}