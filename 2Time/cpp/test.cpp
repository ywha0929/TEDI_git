#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
    // string num = "00001";
    // int len = num.length();
    // for(int i = 0; i<len; i++)
    //     if(num[0] == '0')
    //         num.erase(num.begin());
    //     else
    //         break;
    // cout<<num<<endl;
    int input = 0;
    int digit = 0;
    int start = 0;
    string num ;
    vector<int> output;
    vector<int> digits;
    cin>>num;
    if(num[0] == '0')
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i = 0; i< num.size(); i++)
    {
        digit = num[i]-'0';

        output.push_back(digit/4);
        digit -=(4 * (digit/4));
        output.push_back(digit/2);
        digit -=(2 * (digit/2));
        output.push_back(digit/1);
        digit -=(1 * (digit/1));
    }
    for(int i = 0; 1; i++)
    {
        if(output[0] == 0)
        {
            printf("%p\n",output.begin());
            output.erase(output.begin());
            printf("%p\n",output.begin());
        }
        else
            break;
        for(int j = 0; j< output.size(); j++)
        {
            cout<<output[j];
        }
        cout<<endl;
    }
    for(int i = start; i< output.size(); i++)
        cout<<output[i];
    cout<<endl;
}