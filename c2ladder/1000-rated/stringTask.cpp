#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size();
vector<char>v;
for(int i=0;i<n;i++)
{
    s[i]=tolower(s[i]);
}
char c=s[n-1];
for(int i=0;i<n;i++)
{
    if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y')
    {
        continue;
    }
    else {
        v.push_back('.');
        v.push_back(s[i]);
    }
}
for(char x:v)
{
    cout<<x;
}
cout<<endl;
return 0;
}