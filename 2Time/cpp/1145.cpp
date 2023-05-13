#include <iostream>
using namespace std;
int main(void) {
    int arr[5];
    int min;
    for(int i = 0; i< 5; i++)
    {
        cin>>arr[i];
        if(i == 0)
            min = arr[i];
        else if( min > arr[i])
            min = arr[i];
    }
    int count = 0;
    int answer = min;
    while(1)
    {
        for(int i = 0; i< 5; i++)
        {
            if(answer % arr[i] == 0)
                count++;
        }
        if(count >= 3)
            break;
        else
        {
            answer++;
            count = 0;
        }
    }
    cout<<answer<<endl;
}