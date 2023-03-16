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
    ll start=pow(2,n-1), end=pow(2,n)-1;
    while(start<=end)
    {
        ll temp=0;
        ll j=start;
        for(ll i=n-1;i>=0;i--)
        {
            if(j&1)
            {
                temp+=v[i];
                j=(j>>1);
            }
            else
            {
                temp-=v[i];
                j=(j>>1);

            }
        }
        if((abs(temp)%360)==0)
        {
            cout<<"YES\n";
            return;
        }
        // cout<<temp<<endl;
        start++;
    }
    cout<<"NO\n";
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
