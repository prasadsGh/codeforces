/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    string s; cin>>s;
    int flag=0;
    ll n=s.length();
    int count=0,count1=0;
    for(ll i=0;i+1<n;i++)
    {
        if(s[i]!=s[i+1]) flag=1;
        if(s[i]==0) count++;
        if(s[i]==1) count1++;
    }
    for(ll i=0;i<n;i++)
    {
         if(s[i]=='0') count++;
        else count1++;
    }
   
    if(flag==0)
    {
        cout<<"NET\n";
        return;
    }
    ll temp=min(count,count1);
    // cout<<count<<" "<<count1<<endl;
    if((temp%2)==0) cout<<"NET\n";
    else cout<<"DA\n";
}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t=1; cin>>t;
          while(t--)
          {
            prasad();
          }
          return 0;
}
