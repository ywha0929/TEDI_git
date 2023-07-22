#include <iostream>
#include <vector>
#include <string>

// #include <algorithm>

using namespace std;

int main(void) {
    string name;
    int n=0;
    vector<int> vl;
    vector<int> vo;
    vector<int> vs;
    vector<int> ve;
    vector<string> teams;
    vector<int> a;
    int l=0;
    int o=0;
    int v=0;
    int e=0;
    int index=0;
    int max;
    // int temp[4]={0,};
    int l1,o1,v1,e1;
    int result = 0;
    cin >> name;
    cin >> n;
   
    for(int i = 0;i < name.length();i++){
        if(name[i]=='L'){
            l++;
        }else if(name[i]=='O'){
            o++;
        }else if(name[i]=='V'){
            v++;
        }else if(name[i]=='E'){
            e++;
        }
    }
   
    for (int i = 0; i < n; i++) {
        string team_name;
        cin >> team_name;
        teams.push_back(team_name);
    }
   
   
    for (int i = 0; i < n; i++) {
        l1 = 0;
        o1 = 0;
        v1 = 0;
        e1 = 0;
        for (int j = 0;j<teams[i].length();j++){
            if(teams[i][j]=='L'){
                cout<<"L "<<teams[i]<<endl;
                l1 += 1;
            }else if(teams[i][j]=='O'){
                cout<<"O "<<teams[i]<<endl;
                o1 += 1;
            }else if(teams[i][j]=='V'){
                cout<<"V "<<teams[i]<<endl;
                v1 += 1;
            }else if(teams[i][j]=='E'){
                cout<<"E "<<teams[i]<<endl;
                e1 += 1;
            }
            
            // cout<<temp[0]<<endl;
            // cout<<temp[1]<<endl;
            // cout<<temp[2]<<endl;
            // cout<<temp[3]<<endl;
            
            // temp[0] = 0;
            // temp[1] = 0;
            // temp[2] = 0;
            // temp[3] = 0;
        }
        vl.push_back(l1);
        cout<<*vl.end()<<endl;
        vo.push_back(v1);
        cout<<*vo.end()<<endl;
        vs.push_back(o1);
        cout<<*vs.end()<<endl;
        ve.push_back(e1);
        cout<<*ve.end()<<endl;
    }
    cout<<vo[0]<<endl;
    cout<<vo[1]<<endl;
    cout<<vo[2]<<endl;
    cout<<vo[3]<<endl;
   
   
    for (int i = 0; i < n; i++) {
        int l2 = vl[i]+l;
        int o2 = vo[i]+o;
        int v2 = vs[i]+v;
        int e2 = ve[i]+e;
        // cout<<vl[i]<<endl;
        // cout<<vo[i]<<endl;
        // cout<<vs[i]<<endl;
        // cout<<ve[i]<<endl;
        result = ((l2 + o2) * (l2 + v2) * (l2 + e2) * (o2 + v2) * (o2 + e2) * (v2 + e2)) % 100;
        cout<<result<<endl;
        a.push_back(result);
    }
    max=a[0];
    for(int i = 0;i < a.size();i++){
       
        if(max < a[i]){
            max=a[i];
            index=i;
        }
    }
   
    cout << teams[index] << endl;
   
    return 0;
}
