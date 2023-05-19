/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int mod =1000000007;

void prasad()
{
    int n,k; cin>>n>>k;

    int temp=k;
    int ans=0;
    int adder=1;
    while(k)
    {
        if(k&1 )
        {
            ans+=adder;
            ans%=mod;
        }
        
            adder*=n;
            adder%=mod;
        
        k>>=1;

    }
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
