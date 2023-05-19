#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string>v;
    for(int i=0;i<5;i++)
    {
        string k;
        cin>>k;
        v.push_back(k);
    }
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(s[0]==v[i].at(0) or s[1]==v[i].at(1))
        {
            flag=1;
        }
    }
    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
    
return 0;
}