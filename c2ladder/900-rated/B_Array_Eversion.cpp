/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n ; cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll id=max_element(v.begin(),v.end())-v.begin();
    ll mx=v[n-1];
    ll count=0;
    int flag=0;
    for(ll i=n-1;i>=id;i--)
    {
        if(v[i]>mx)
        {
            mx=v[i];
            count++;
            flag=1;
        }
    }
    
    cout<<count<<endl;
 
}

int main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          ll t; cin>>t;
          while(t--)
          {
            prasad();
          }
          return 0;
}
