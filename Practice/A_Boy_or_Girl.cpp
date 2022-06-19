#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    set<char> a;
    for(int i=0;i<n;i++)
    {
        a.insert(s[i]);
    }
    int k=a.size();
    if(k%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
return 0;
}