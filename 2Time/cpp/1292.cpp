#include <iostream>
#include <vector>


using namespace std;

int main(void)
{
    vector<int> arr;
    int A,B;
    for(int i =1; i<= 1000;i++)
    {
        for(int j =0; j<i;j++)
            arr.push_back(i);
    }
    cin>>A>>B;
    int result = 0;
    for(int i = A-1; i<B; i++)
    {
        result += arr[i];
    }
    cout<<result<<endl;
}