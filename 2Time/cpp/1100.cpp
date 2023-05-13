#include <iostream>
#include <vector>

using namespace std;

int main(void) 
{
    int size = 8;
    vector<vector<char>> board;
    char input;
    int count = 0;
    for(int i = 0; i< size; i++)
    {
        vector<char> temp;
        for(int j = 0; j< size; j++)
        {
            cin>>input;
            temp.push_back(input);
        }
        board.push_back(temp);
    }
    for(int i = 0; i< size; i++)
    {
        for(int j = 0; j< size; j++)
        {
            if((i+j)%2==0 && board[i][j] == 'F')
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}