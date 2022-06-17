#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size(),flag=0;
    for(int i=1;i<n;i++)
    {
        if(islower(s[i])) flag=1;
    }
    if(n==1) flag=1;
    if(flag==0)
    {   s[0]=toupper(s[0]);
        for(int i=1;i<n;i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
        cout<<endl;
    }
    else cout<<s<<endl;
return 0;
}