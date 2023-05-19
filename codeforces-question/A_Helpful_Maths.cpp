#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char>v;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]!='+') v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1]<<endl;
    
    

return 0;
}