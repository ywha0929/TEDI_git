#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <list>
using namespace std;

int main(void)
{
    stack<int> myStack;
    queue<int> myQueue;
    vector<int> myVector;
    list<int> myList;
    int num = 0;
    list<int> guess;
    cin>>num;
    for(int i = 0; i<3; i++)
    {
        int temp;
        cin>>temp;
        guess.push_back(temp);
    }
    myList.push_back( num % 10);
    num /=10;
    myList.push_back( num % 10);
    num /=10;
    myList.push_back( num % 10);
    num /=10;

}