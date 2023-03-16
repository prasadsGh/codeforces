/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll count=0;
    for(ll i=n-1;i>0;i--)
    {
        if(v[i-1]>=v[i])
        {
            while(v[i-1]>=v[i] && v[i-1]!=0)
            {
                v[i-1]/=2;
                count++;
            }
        }
    }
    for(ll i=0;i+1<n;i++)
    {
        if(v[i+1]==v[i])
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<count<<endl;
}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
