#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

string rotateString(queue<char> queue)
{
    string result= "";
    queue.push(queue.front());
    queue.pop();
    for(int i = 0; i< queue.size(); i++)
    {
        result += queue.front();
        queue.push(queue.front());
        queue.pop();
    }
    return result;
}

int main(void)
{
    vector<string> origin;
    int n = 0;
    scanf("%d",&n);
    string input;
    for(int i = 0; i< n; i++)
    {
        if(i == 0)
        {
            cin>>input;
            origin.push_back(input);
        }
        else
        {
            queue<char> inputQ;
            while(1)
            {
                char c;
                scanf("%c",&c);
                if( c == ' ' || c == '\n')
                    break;
                else
                    inputQ.push(c);
            }
            bool isSame = false;
            for(int k = 0; k< inputQ.size(); k++)
            {
                string result = rotateString(inputQ);
                
                for(int j= 0; j<origin.size(); j++)
                {
                    isSame = result.compare(origin[j]);
                    if(isSame)
                        break;
                    
                }
                
            }
            if(!isSame)
                origin.push_back(rotateString(inputQ));
            //input을 읽은 다음에
            //현재 vector에 있는 string들과 비교
        }
    }
    cout<<origin.size()<<endl;
}