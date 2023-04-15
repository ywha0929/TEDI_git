#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main(void)
{
    int n = 0;
    cin >> n;
    vector<int> factors;
    for(int i = 0; i< n ; i++)
    {
        int input =0 ;
        cin >> input;
        factors.push_back(input);
    }
    int max,min;
    
    max = factors[0];
    min = factors[0];
    for(int i = 0; i< n; i++)
    {
        if(max < factors[i])
            max = factors[i];
        if(min > factors[i])
            min = factors[i];
    }
    cout<<max*min << endl;
}