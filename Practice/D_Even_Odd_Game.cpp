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
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.rbegin(),v.rend());
    ll a=0,b=0;
    for(ll i=0;i<n;i++)
    {
        if(i&1)
        {
            if((v[i]&1))
            {
                b+=v[i];
            }
        }
        else
        {
            if(!(v[i]&1))
            {
                a+=v[i];
            }
        }
    }
    if(a==b)
    {
        cout<<"Tie\n";
    }
    else if(a>b)
    {
        cout<<"Alice\n";
    }
    else cout<<"Bob\n";
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
