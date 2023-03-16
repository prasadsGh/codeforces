/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    string s; cin>>s;
    ll n=s.length();
    map<char,ll>mp;
    for(ll i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    ll count=0;
    for(auto i:mp)
    {
        if((i.second)&1) count++;
    }
    if(count>1)
    {
        if(n&1)
        {
            cout<<"First\n";
        }
        else cout<<"Second\n";
    }
    else cout<<"First\n";
}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t=1; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
