/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n,k; cin>>n>>k;
    vector<ll>s(n+1);
    for(ll i=n-k+1;i<=n;i++)
    {
        cin>>s[i];
    }
    if(k==1)
    {
        cout<<"Yes\n";
        // cout<<1<<endl;
        return;
    }
    vector<ll>v(n+1);
    for(ll i=n-k+2;i<=n;i++)
    {
        v[i]=s[i]-s[i-1];
    }
    if(!is_sorted(v.begin()+n-k+2,v.end()))
    {
        cout<<"No\n";
        // cout<<2<<endl;
        return;
    }
    if((s[n-k+1]>((n-k+1)*v[n-k+2])))
    {
        cout<<"No\n";
        // cout<<3<<endl;
        return;
    }
    cout<<"Yes\n";
    // cout<<4<<endl;

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
