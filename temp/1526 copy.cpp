#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
    int N;
    scanf("%d",&N);
    int temp = 0;
    stack<int> digits;
    int result = 0;
    while(temp != 0)
    {
        digits.push(temp%10);
        temp = temp/10;
    }
    while(!digits.empty())
    {
        int digit = digits.top();
        digits.pop();
        if(digit >=7)
        {
            result +=7;
        }
        else if(digit >=4)
        {
            result += 4;
        }
        else
        {
            
        }
    }
}