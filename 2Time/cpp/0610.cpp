#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int main(void)
{
    stack<int> sa;
    queue<int> qa;
    vector<int> va;
    string a;
    // int a = 12345;
    cin>>a;
    cout<<a<<endl;
    cout<<a[0]<<endl;
    const char* arr = a.c_str();
    char arr2[100];
    strcpy(arr2,arr);
    cout<<arr2<<endl;
    
    // while(a!=0)
    // {
    //     sa.push(a%10);
    //     qa.push(a%10);
    //     va.push_back(a%10);
    //     a/=10;
    // }
    // while(!sa.empty())
    // {
    //     cout<<sa.top()<< " ";
    //     cout<<qa.front()<< endl;;

    //     sa.pop();
    //     qa.pop();

    // }
    // cout<<va[0]<<endl;

}