#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;
int main(void)
{
    string a,b;
    stack<char> sa;
    stack<char> sb;
    stack<char> result;
    cin>>a>>b;
    
    for(int i = 0; i<a.size(); i++)
    {
        sa.push(a[i]);
    }
    for(int i = 0; i<b.size(); i++)
    {
        sb.push(b[i]);
    }
    
    char upbit = '0';

    while(!(sa.empty() && sb.empty()))
    {
        char ba = sa.empty()?'0':sa.top();
        char bb = sb.empty()?'0':sb.top();
        // printf("hSi%c\n",bb);
        if(ba == '0')
        {
            if(bb == '0')
            {
                if(upbit == '0')
                {
                    upbit = '0';
                    result.push('0');
                }
                else
                {
                    upbit = '0';
                    result.push('1');
                }
            }
            else 
            {
                if(upbit == '0')
                {
                    upbit = '0';
                    result.push('1');
                }
                else
                {
                    upbit = '1';
                    result.push('0');
                }
            }
        }
        else
        {
            if(bb == '0')
            {
                if(upbit == '0')
                {
                    upbit = '0';
                    result.push('1');
                }
                else
                {
                    upbit = '1';
                    result.push('0');                    
                }
            }
            else
            {
                if(upbit == '0')
                {
                    upbit = '1';
                    result.push('0');
                }
                else
                {
                    upbit = '1';
                    result.push('1');                    
                }
            }
        }
        if(!sa.empty())
            sa.pop();
        if(!sb.empty())
            sb.pop();
    }
    if(upbit == '1')
        result.push('1');
    int start = 0;
    if(result.size() == 0)
        cout<<0<<endl;
    else
    {
        while(!result.empty())
        {   
            if(start == 0 && result.top() == '0')
            {
                result.pop();
                continue;
            }
            else if(start == 0 && result.top() == '1')
            {
                start = 1;
            }
            cout<<result.top();
            result.pop();
        }
    }
    cout<<endl;
    return 0;

}