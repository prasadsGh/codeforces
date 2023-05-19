/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=2;i+1<=n;i++)
    {
        ans+=(i*(i+1));
    }
    cout<<ans<<endl;
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
