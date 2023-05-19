/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll a,b,c,d; cin>>b>>a>>d>>c;
    ll ans=INT_MAX;
   for(ll i=0;i<=100;i++)
   {
    for(ll j=0;j<=100;j++)
    {
        if((a+(i*b))==(c+(j*d)))
        {
            ans=min(ans,a+(i*b));
        }
    }
   }
   if(ans==INT_MAX) cout<<-1<<endl;
   else cout<<ans<<endl;
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
