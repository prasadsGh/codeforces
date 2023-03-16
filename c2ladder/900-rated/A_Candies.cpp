/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n; cin>>n;
    ll t=2;
     t=t<<1;
    while((n%(t-1))!=0)
    {
         t=t<<1;
    }
    cout<<n/(t-1)<<endl;
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
