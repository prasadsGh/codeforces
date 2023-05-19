/* author:prasad patil
   codeforces:rocklee07
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long 
void prasad()
{
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>0)a+=(i+1);
        else b+=(i+1);
    }
    int ans= abs(a-b);
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
