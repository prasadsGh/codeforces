/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
void prasad()
{
    int n; cin>>n;
    int ans=0;

    //-->2022/6==337
    ans=(((n*(n+1))%mod)*(4*n-1)%mod)%mod*337%mod;
    cout<<ans<<endl;  
}

signed main()
{
          ios_base::sync_with_stdio(false);
      cin.tie(NULL); cout.tie(NULL);
          int t=1; 
          cin>>t; 
          while(t--)
          {
            prasad();
          }
          return 0;
}
