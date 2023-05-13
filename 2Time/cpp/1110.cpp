#include <iostream>

using namespace std;

int getNewNumber(int num)
{
    
    int ten=0;
    int one = 0;
    int newNum= 0;
    ten = num/10;
    one = num%10;
    // cout<<ten<<endl;
    // cout<<one<<endl;
    newNum = ten+one;
    // cout<<newNum<<endl;
    if(newNum < 10)
    {
        return (one*10)+newNum;
    }
    else
    {
        return (one*10) + (newNum%10);
    }

}

int main(void)
{
    int len = 0;
    int input = 0;
    int temp = 0;
    cin>>input;
    temp = input;
    // cout<<temp<<endl;
    temp = getNewNumber(temp);
    // cout<<temp<<endl;
    len++;
    while(temp != input) 
    {
        temp = getNewNumber(temp);
        // cout<<temp<<endl;
        len++;
    }
    cout<<len<<endl;
}