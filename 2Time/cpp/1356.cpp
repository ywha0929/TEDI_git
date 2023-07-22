#include <iostream>
#include <vector>
#include <string>
#include <time.h>
using namespace std;
int main(void) {
    string input;
    vector<int> numbers;
    cin >> input;
    for(int i =0; i< input.size(); i++)
    {
        numbers.push_back(input[i]-'0');
    }
    if(numbers.size() < 2)
    {

        cout<<"NO"<<endl;
        return 0;
    }
    // int flag = 1;
    clock_t start,end;
    start = clock();
    for(int i = 1; i<numbers.size(); i++)
    {
        int left = 1, right =1;
        for(int j = 0; j<i; j++)
        {
            left *= numbers[j];
        }
        for(int j = i; j<numbers.size(); j++)
        {
            right *= numbers[j];
        }
        if(left == right)
        {
            cout<<"YES"<<endl;
            break;
        }
    }
    cout<<"NO"<<endl;
    end = clock();
    cout<<"first : "<<end-start<<endl;

    start = clock();
    int left = 1, right = 1;
    int leftCur = 0, rightCur = numbers.size()-1;
    left *= numbers[leftCur];
    leftCur++;
    right *= numbers[rightCur];
    // rightCur--;
    while(leftCur < rightCur)
    {
        // cout<<"leftCur "<<leftCur<<endl;
        // cout<<"rightCur "<<rightCur<<endl;
        if(left < right || right == 0)
        {
            
            left *= numbers[leftCur];
            leftCur++;
            
        }
        else if(left > right || left == 0)
        {
            rightCur--;
            right *= numbers[rightCur];
            
        }
        else if(left == right)
        {
            
            left *= numbers[leftCur];
            leftCur++;
            
        }

    }
    // if(leftCur == rightCur)
    //     cout<<"NO"<<endl;
    if(left == right)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    end = clock();
    cout<<"second : "<<end-start<<endl;
}