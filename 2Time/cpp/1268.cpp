#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(void)
{
    vector<vector<int>> arr1;
    vector<int> nums;
    int n = 0;
    cin>>n;
    for(int i =0 ; i< n; i++)
    {
        vector<int> temp;
        int input = 0;
        for(int j = 0; j< 5; j++)
        {
            cin>>input;
            temp.push_back(input);
        }
        arr1.push_back(temp);
    }

    for(int i = 0; i< n; i++)
    {
        int* arr = (int *) malloc(sizeof(int) * n);
        memset(arr,0,sizeof(int) * n);
        for(int j = 0; j< 5; j++)
        {
            for(int k =0; k< n; k++)
            {
                if(arr1[k][j] == arr1[i][j])
                {
                    arr[k] =1;
                }
            }
        }
        int sum = 0;
        for(int k = 0; k< n; k++)
        {
            sum += arr[k];
        }
        nums.push_back(sum);
    }

    int max = nums[0];
    int index = 0;
    for(int i = 0; i< n; i++)
    {
        if(max < nums[i])
        {
            max = nums[i];
            index = i;
        }
    }
    cout<<index+1<<endl;
}