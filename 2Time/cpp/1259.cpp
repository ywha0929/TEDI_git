#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    while(1)
    {
        int a;
        cin >> a;
        if(a==0)
            break;
        
        vector<int> arr;
        while(a != 0)
        {
            arr.push_back(a%10);
            a/=10;
        }
        int check = 0;
        for(int i = 0; i< arr.size()/2;i++)
        {
            if(arr[i] != arr[arr.size()-1-i])
            {
                check = 1;
                break;
            }
                
        }
        if(check == 1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;

    }
}