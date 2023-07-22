#include <iostream>
#include <vector>

using namespace std;

int main(void) 
{
    int N,L,D;
    int time = 0;
    vector<int> quietTime;
    cin>>N>>L>>D;
    for(int i = 0; i< N; i++)
    {
        time+=L;
        for(int j = 0; j< 5; j++)
        {
            
            quietTime.push_back(time);
            time++;
            
        }
    }
    for(int i = 0; i<quietTime.size() ; i++)
    {
        if(quietTime[i]%D == 0)
        {
            cout<<quietTime[i]<<endl;
            return 0;
        }
    }
    while(1)
    {
        if(time % D ==0){
            cout<<time<<endl;
            return 0;
        }
            
        else
            time++;
    }
    // cout<<time<<endl;
}