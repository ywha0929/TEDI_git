#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    string name;
    cin >> name;
    int n = 0;
    cin >> n;
    vector<string> names;
    vector<int> l;
    vector<int> o;
    vector<int> v;
    vector<int> e;
    vector<int> results;

    for(int i = 0; i< n; i++)
    {
        string temp;
        cin >> temp;
        names.push_back(temp);
    }
    sort(names.begin(),names.end());
    for(int i= 0; i< n; i++)
    {
        int tl = 0;
        int to = 0;
        int tv = 0;
        int te = 0;
        
        for(int j = 0; j<names[i].length(); j++)
        {
            if(names[i][j] == 'L')
                tl++;
            else if(names[i][j] == 'O')
                to++;
            else if(names[i][j] == 'V')
                tv++;
            else if(names[i][j] == 'E')
                te++;
        }
        l.push_back(tl);
        o.push_back(to);
        v.push_back(tv);
        e.push_back(te);
    }
    int nl =0;
    int no = 0;
    int nv = 0;
    int ne = 0;
    for(int i = 0; i< name.length(); i++)
    {
        if     (name[i]== 'L')
            nl++;
        else if(name[i]== 'O')
            no++;
        else if(name[i]== 'V')
            nv++;
        else if(name[i] == 'E')
            ne++;
    }
    for(int i = 0; i< n; i++)
    {
        int L = nl + l[i];
        int O = no + o[i]; 
        int V = nv + v[i];
        int E = ne + e[i];
        int result = ((L+O) * (L+V) * (L+E) * (O+V) * (O+E) * (V+E)) % 100;
        results.push_back(result);
    }
    int max = results[0];
    int index = 0;
    for(int i = 0; i< results.size(); i++)
    {
        if(max < results[i])
        {
            max = results[i];
            index = i;
        }
    }
    cout<<names[index]<<endl;
}