/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll A,H,n; cin>>A>>H>>n;
    vector<ll>a(n),h(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>h[i];
    ll damage=0;
    for(ll i=0;i<n;i++)
    {
       damage+=(h[i]/A)*a[i];
       if(h[i]%A) damage+=a[i];
    }
    
  
        
    cout<<"YES\n";

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
