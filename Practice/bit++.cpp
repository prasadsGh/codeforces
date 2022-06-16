#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    vector<string>s;
    for(int i=0;i<n;i++)
    {
        string k="";
        cin>>k;
        
        if(k=="++X" or k=="X++")
        {
            v.push_back(1);
        }
        else if(k=="--X" or k=="X--")
        {
            v.push_back(-1);
        }

    }
    int sum=0;
    for(auto x:v)
    {
        sum+=x;
    }
    cout<<sum<<endl;
return 0;
}