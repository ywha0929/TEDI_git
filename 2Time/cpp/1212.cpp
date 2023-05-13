#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
    int input = 0;
    int digit = 0;
    int start = 0;
    string num;
    vector<char> output;
    cin>>num;
    if(num[0] == '0')
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i = 0; i< num.size(); i++)
    {
        digit = num[i]-'0';

        output.push_back((digit/4)+'0');
        digit -=(4 * (digit/4));
        output.push_back(digit/2+'0');
        digit -=(2 * (digit/2));
        output.push_back(digit/1+'0');
        digit -=(1 * (digit/1));
    }
    for(int i = 0; 1; i++)
    {
        if(output[i] == '0')
        {
            start++;
        }
        else
            break;;
    }
    for(int i = start; i< output.size(); i++)
        cout<<output[i];
    cout<<endl;
}