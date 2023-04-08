#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
    stack<char> inputS;
    int result=0;
    int mul = 1;
    while(1)
    {
        char c;
        scanf("%c",&c);
        if( c == ' ' || c == '\n')
            break;
        else
            inputS.push(c);
    }
    for(;!inputS.empty();)
    {
        char thisInput = inputS.top();
        inputS.pop();
        if(thisInput>=48 && thisInput <=57)
        {
            result += (thisInput - 48) * mul;
        }
        else if(thisInput>=65 && thisInput<=70)
        {
            result += (thisInput - 55) * mul;
        }
        mul *= 16;
    }printf("%d\n",result);
}