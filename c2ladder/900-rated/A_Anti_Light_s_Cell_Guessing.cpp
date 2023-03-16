/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void prasad()
{
    ll n,m; cin>>n>>m;
    if(n==1 && m==1) cout<<0<<endl;
    else if(n==1 or m==1)
    {
        cout<<1<<endl;
        return;
    }
    else cout<<2<<endl;
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
