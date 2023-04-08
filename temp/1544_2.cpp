#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int main(void)
{
    string input1;
    string input2;
    cin>>input1;
    cin>>input2;

    queue<char> inputQ;
    for(int i = 0; i< input2.size(); i++)
    {
        inputQ.push(input2[i]);
    }
    for(int i = 0; i<inputQ.size(); i++)
    {
        string temp = "";
        for(int j = 0; j< inputQ.size(); j++)
        {
            temp+= inputQ.front();
            inputQ.push(inputQ.front());
            inputQ.pop();
        }
        inputQ.push(inputQ.front());
        inputQ.pop();
        if(input1.compare(temp)==0)
        {
            cout<<"same\n";
            return 0;
        }
    }
    cout<<"diff\n";
}