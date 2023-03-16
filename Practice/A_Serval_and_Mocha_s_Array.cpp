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
                cin>>v[i];

    ll gcd=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(__gcd(v[i],v[j])<=2)
            {
                cout<<"Yes\n";
                return;
            }
        }
    }
    cout<<"No\n";
    
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
