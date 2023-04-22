#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main(void)
{
    list<int> List;
    vector<int> sumVec;
    int N;
    int input;
    long long count = 0;
    int sum = 0;
    cin>>N;
    for(int i = 0; i< N; i++)
    {
        cin>>input;
        sum+=input;
        sumVec.push_back(sum);
        List.push_back(input);
    }
    // cout << sum << endl;
    if(sum == 0)
    {
        long long count1 = 0;;
        int pSum = 0;
        for(list<int>::iterator it = List.begin(); it != List.end(); it++)
        {
            pSum += *it;
            if(pSum == 0)
                count1++;
        }
        if(count1>= 4)
        {
            count = (count1-1) * (count1-2) * (count1-3) / 6;
        }
    }
    else if(sum%4 == 0)
    {
        
    }
    else
    {
        count = 0;
    }
    cout<<count<<endl;
}